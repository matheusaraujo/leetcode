class Solution:
    def isHappy(self, n: int) -> bool:
        hist = set()

        while True:
            if n == 1: return True
            if n in hist: return False
            hist.add(n)
            n = sum(int(i) * int(i) for i in list(str(n)))

