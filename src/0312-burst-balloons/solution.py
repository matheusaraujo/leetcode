class Solution:
    def maxCoins(self, nums: List[int]) -> int:
        dp, nums = {}, [1] + nums + [1]

        for offset in range(2, len(nums)):
            for left in range(len(nums) - offset):
                right = left + offset
                for pivot in range(left + 1, right):
                    coins = nums[left] * nums[pivot] * nums[right]
                    coins += dp.get((left, pivot), 0) + dp.get((pivot, right), 0)
                    dp[(left, right)] = max(coins, dp.get((left, right), 0))

        return dp.get((0, len(nums) - 1), 0)

