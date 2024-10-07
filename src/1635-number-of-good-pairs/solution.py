class Solution:
    def numIdenticalPairs(self, nums: List[int]) -> int:
        frequency = defaultdict(int)  # Tracks the frequency of each number
        result = 0  # Stores the total number of good pairs
        
        for num in nums:
            result += frequency[num]  # Add the number of times `num` has appeared before
            frequency[num] += 1  # Increment the frequency of `num`
        
        return result


