class Solution {
    public int lengthOfLastWord(String s) {
        int i = s.length() - 1;
        while(i >= 0 && s.charAt(i) == ' ')
            i--;
        int e = i;
        while(i >= 0 && s.charAt(i) != ' ')
            i--;
        return e - i;
    }
}
