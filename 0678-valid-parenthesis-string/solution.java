class Solution {

    public boolean checkValidString(String s) {
        int min = 0, max = 0;

        for(char c : s.toCharArray()) {
            if (c == '(') {
                min++;
                max++;
            }
            else if (c == ')') {
                min = Math.max(0, min - 1);
                max--;
                if (max < 0) return false;
            }
            else {
                min = Math.max(0, min - 1);
                max++;
            }
        }

        return min == 0;
    }
}
