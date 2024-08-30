class Solution:
    def generateParenthesis(self, n: int) -> List[str]:
        result = []

        def solve(stack, open, close):
            if open == close == n:
                result.append("".join(stack))
                return

            if open < n:
                stack.append("(")
                solve(stack, open + 1, close)
                stack.pop()

            if close < open:
                stack.append(")")
                solve(stack, open, close + 1)
                stack.pop()

        solve([], 0, 0)
        return result


