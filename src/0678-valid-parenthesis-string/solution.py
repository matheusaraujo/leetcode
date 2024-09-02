class Solution:
    def checkValidString(self, s: str) -> bool:
        amin, amax = 0, 0

        for c in s:
            if c == "(": amin, amax = amin + 1, amax + 1
            elif c == ")": amin, amax = amin - 1, amax - 1
            else: amin, amax = amin - 1, amax + 1
            amin = max(0, amin)
            if amax < 0: return False

        return amin == 0

