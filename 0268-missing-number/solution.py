class Solution:
    def missingNumber(self, nums: List[int]) -> int:
        s, n = sum(nums), len(nums)
        return n * (n + 1) // 2 - s


