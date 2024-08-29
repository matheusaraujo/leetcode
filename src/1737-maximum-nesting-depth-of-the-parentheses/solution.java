class Solution {
    public int maxDepth(String s) {
        int currDeepth = 0, maxDeepth = 0;

        for(char c : s.toCharArray()) {
            if (c == '(') currDeepth += 1;
            else if (c == ')') currDeepth -= 1;
            maxDeepth = Math.max(maxDeepth, currDeepth);
        }

        return maxDeepth;
    }
}
