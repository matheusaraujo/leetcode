class Solution:
    def trap(self, height: List[int]) -> int:
        if not height or len(height) == 0: return 0

        left, right, result = 0, len(height) - 1, 0
        leftMax, rightMax = height[left], height[right]

        while left < right:
            if leftMax < rightMax:
                left += 1
                leftMax = max(leftMax, height[left])
                result += leftMax - height[left]
            else:
                right -= 1
                rightMax = max(rightMax, height[right])
                result += rightMax - height[right]

        return result



