class Solution:
    def isAdditiveNumber(self, num: str) -> bool:
        def solve(num: str, idx: int, first: int, second: int, numNumbers: int) -> bool:
            if idx == len(num): return numNumbers >= 3
            currNum = 0
            for i in range(idx, len(num)):
                currNum = currNum * 10 + (ord(num[i]) - ord("0"))
                if first == None or second == None or currNum == first + second:
                    if solve(num, i + 1, second, currNum, numNumbers + 1):
                        return True
                if num[idx] == "0": break
            return False

        return solve(num, 0, None, None, 0)


            


