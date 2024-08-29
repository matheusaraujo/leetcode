class Solution:
    def numOfPairs(self, nums: List[str], target: str) -> int:
        count = 0
        n = len(nums)
        
        for i in range(n):
            for j in range(n):
                if i != j:
                    if nums[i] + nums[j] == target:
                        count += 1
                        
        return count

        
