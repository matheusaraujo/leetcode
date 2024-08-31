class Solution:
    digitToChar = {
        "2": "abc",
        "3": "def",
        "4": "ghi",
        "5": "jkl",
        "6": "mno",
        "7": "pqrs",
        "8": "tuv",
        "9": "wxyz"
    }

    def letterCombinations(self, digits: str) -> List[str]:
        result = []

        def backtrack(i, curr):
            if len(curr) == len(digits):
                result.append(curr)
                return
            for c in self.digitToChar[digits[i]]:
                backtrack(i + 1, curr + c)

        if digits: backtrack(0, "")

        return result
