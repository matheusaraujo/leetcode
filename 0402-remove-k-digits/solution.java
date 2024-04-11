class Solution {
    public String removeKdigits(String num, int k) {
        Stack<Character> s = new Stack<>();

        for(char c : num.toCharArray()) {
            while(!s.isEmpty() && k > 0 && s.peek() > c) {
                s.pop();
                k--;
            }
            s.push(c);
        }

        while(k > 0 && !s.isEmpty()) {
            s.pop();
            k--;
        }

        StringBuilder ans = new StringBuilder();

        while(!s.isEmpty()) {
            ans.insert(0, s.pop());
        }

        while(ans.length() > 0 && ans.charAt(0) == '0') {
            ans.deleteCharAt(0);
        }

        return ans.length() == 0 ? "0" : ans.toString();
    }
};
