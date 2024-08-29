class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        d = len(digits) - 1
        while d >= 0:
            if digits[d] == 9:
                digits[d] = 0
                d -= 1
            else:
                digits[d] += 1
                return digits
        return [1] + digits

