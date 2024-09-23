class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        count, candidate = 0, -1
        for num in nums:
            if count == 0: candidate = num
            count += 1 if num == candidate else -1
        return candidate
