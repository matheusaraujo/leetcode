class Solution:
    # def mapWord(self, word: str):
    #     m = {}
    #     for c in word: m[c] = m.get(c, 0 ) + 1
    #     return m
    
    # def countCharacters(self, words: List[str], chars: str) -> int:
    #     charsMap, result = self.mapWord(chars), 0
        
    #     for word in words:
    #         wordMap, doable = self.mapWord(word), True
    #         for c in wordMap:
    #             if c not in charsMap or wordMap[c] > charsMap[c]:
    #                 doable = False
    #                 break
    #         if doable:
    #             result += len(word)
    #     return result

    def countCharacters(self, words: List[str], chars: str) -> int:
        chars_map = Counter(chars)
        result = 0
        
        for word in words:
            word_map = Counter(word)
            if all(word_map[c] <= chars_map.get(c, 0) for c in word_map):
                result += len(word)
        
        return result
        
