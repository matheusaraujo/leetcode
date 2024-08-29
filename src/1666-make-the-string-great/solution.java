class Solution {

    private String stackToString(Stack<Character> stack) {
        StringBuilder ans = new StringBuilder();
        for(char c : stack) {
            ans.append(c);
        }
        return ans.toString();
    }

    public String makeGood(String s) {
        Stack<Character> stack = new Stack();
        for (char c : s.toCharArray()) {
            if (!stack.isEmpty() && Math.abs(c - stack.peek()) == 32)
                stack.pop();
            else
                stack.push(c);
        }
        return stackToString(stack);
    }
}
