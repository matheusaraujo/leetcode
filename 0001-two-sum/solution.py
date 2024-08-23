class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        hist = {}

        for i, num in enumerate(nums):
            if target - num in hist:
                return [hist[target-num], i]
            hist[num] = i

