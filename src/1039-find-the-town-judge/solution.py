class Solution:
    def findJudge(self, n: int, trust: List[List[int]]) -> int:
        trusted, trusts = [0] * n, [0] * n

        for [a, b] in trust:
            trusted[b - 1] += 1
            trusts[a - 1] += 1

        for i in range(n):
            if trusted[i] == n - 1 and trusts[i] == 0:
                return i + 1
        
        return -1
