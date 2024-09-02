class Solution:
    def canPartition(self, nums: List[int]) -> bool:
        if sum(nums) % 2: return False

        dp, target = set(), sum(nums) // 2
        dp.add(0)

        for i in range(len(nums)):
            newDp = set(dp)
            for t in dp:
                if t + nums[i] == target: return True
                newDp.add(t + nums[i])
            dp = newDp
        return False

