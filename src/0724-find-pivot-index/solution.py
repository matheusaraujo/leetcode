class Solution:
    def pivotIndex(self, nums: List[int]) -> int:
        right, left = sum(nums), 0

        for i, num in enumerate(nums):
            right -= num
            if right == left: return i
            left += num

        return -1
