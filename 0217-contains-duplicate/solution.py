class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        memory = set()
        for num in nums:
            if num in memory:
                return True
            memory.add(num)
        return False
