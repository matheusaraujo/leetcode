class Solution:
    def isMonotonic(self, nums: List[int]) -> bool:
        # if len(nums) == 1: return True
        # i = 1
        # while i < len(nums) and nums[i] == nums[i - 1]:
        #     i += 1
        # if i == len(nums): return True
        # increasing = nums[i] > nums[i - 1]
        # for i in range(i, len(nums)):
        #     if increasing and nums[i] < nums[i - 1]: return False
        #     elif not increasing and nums[i] > nums[i - 1]: return False
        # return True
        increase, decrease = True, True

        for i in range(1, len(nums)):
            if nums[i] < nums[i - 1]: increase = False
            if nums[i] > nums[i - 1]: decrease = False

        return increase or decrease
