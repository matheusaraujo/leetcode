class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        numsSet, ans = set(nums), 0

        for num in numsSet:
            if num - 1 not in numsSet:
                delta = 1
                while num + delta in numsSet:
                    delta += 1
                ans = max(ans, delta)

        return ans

