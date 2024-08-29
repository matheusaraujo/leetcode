class Solution:
    def isValid(self, s: str) -> bool:
        if len(s) % 2 == 1: return False
        stack = []
        mapping = { '(': ')', '{': '}', '[': ']' }

        for c in s:
            if c in mapping:
                stack.append(c)
            else:
                if len(stack) == 0: return False
                p = stack.pop()
                if mapping[p] != c:
                    return False

        return len(stack) == 0

