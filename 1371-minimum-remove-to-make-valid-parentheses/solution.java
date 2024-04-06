class Solution {
    public String minRemoveToMakeValid(String s) {
        int depth = 0, i = 0;
        char[] ans = s.toCharArray();
        
        for(i = 0; i < ans.length; i++) {
            if (ans[i] == '(') {
                depth++;
            } else if (ans[i] == ')') {
                if (depth > 0) depth--;
                else ans[i] = '*';
            }
        }

        i = ans.length;

        while(depth > 0) {
            if (ans[--i] == '(') {
                ans[i] = '*';
                depth--;
            }
        }

        return new String(ans).replace("*", "");
    }
}

