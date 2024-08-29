import (
    "unicode/utf8"
)

func isAlienSorted(words []string, order string) bool {
	
    charIdxMapping := make(map[rune]int)
    
    for idx, char := range order{
        charIdxMapping[char] = idx
    }
    
    var inorder func(s1, s2 string)bool
    
    inorder = func(s1, s2 string) bool{
        
        size1, size2 := len(s1), len(s2)
        
        for idx := 0 ; idx < size1 && idx < size2 ; idx++{
            
            rune1, _ := utf8.DecodeRuneInString(s1[idx:])
            rune2, _ := utf8.DecodeRuneInString(s2[idx:])
            order1, order2 := charIdxMapping[ rune1 ], charIdxMapping[ rune2 ]
            
            if  order1 > order2 {
                return false
                
            }else if order1 < order2 {
                return true
            }

        }
        
        return len(s1) <= len(s2)
    }

    for i:= 0; i < len(words)-1 ; i++{
        if !inorder(words[i], words[i+1]){
            return false
        }  
    }
    
    return true
}
