class Solution {
    public String decodeString(String s) {
        String res = "";
        Stack<Integer> nums = new Stack<Integer>();
        Stack<String> strs = new Stack<String>();
        int cnt = 0;
        for (int i = 0; i < s.length(); ++i) {
            if (s.charAt(i) >= '0' && s.charAt(i) <= '9') {
                cnt = 10 * cnt + s.charAt(i) - '0';
            } else if (s.charAt(i) == '[') {
                nums.push(cnt);
                strs.push(res);
                cnt = 0; res = "";
            } else if (s.charAt(i) == ']') {
                int k = nums.pop();
                String next = strs.pop();
                for (int j = 0; j < k; ++j) 
                    next += res;
                res = next; 
            } else {
                res += s.charAt(i);
            }
        }
        return res;
    }
}
