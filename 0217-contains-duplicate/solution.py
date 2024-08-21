class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        history = {}
        for num in nums:
            if num in history:
                return True
            history[num] = 1
        return False
