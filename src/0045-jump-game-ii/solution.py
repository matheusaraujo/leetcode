class Solution:
    def jump(self, nums: List[int]) -> int:
        left = right = result = maxJump = 0

        while right < len(nums) - 1:
            for i in range(left, right + 1):
                maxJump = max(maxJump, i + nums[i])
            left, right, result = right + 1, maxJump, result + 1

        return result

