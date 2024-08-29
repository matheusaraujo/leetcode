class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        result, curr = nums[0], 0

        for n in nums:
            curr = max(curr, 0)
            curr += n
            result = max(result, curr)

        return result

