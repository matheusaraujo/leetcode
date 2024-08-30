class Solution:
    def maxSlidingWindow(self, nums: List[int], k: int) -> List[int]:
        result, queue, left, right = [], deque(), 0, 0

        while right < len(nums):
            while queue and nums[queue[-1]] < nums[right]:
                queue.pop()
            queue.append(right)

            if left > queue[0]: queue.popleft()

            if right + 1 >= k:
                result.append(nums[queue[0]])
                left += 1

            right += 1

        return result

