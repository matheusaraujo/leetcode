class Solution:
    def partition(self, s: str) -> List[List[str]]:
        result, partition = [], []

        def isPalindrome(i: int, j: int):
            while i < j:
                if s[i] != s[j]: return False
                i, j = i + 1, j - 1
            return True

        def backtracking(i):
            if i >= len(s):
                result.append(partition[:])
                return

            for j in range(i, len(s)):
                if isPalindrome(i, j):
                    partition.append(s[i:j+1])
                    backtracking(j + 1)
                    partition.pop()

        backtracking(0)

        return result

