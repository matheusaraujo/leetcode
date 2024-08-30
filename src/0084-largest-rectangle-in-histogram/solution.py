class Solution:
    def largestRectangleArea(self, heights: List[int]) -> int:
        result, stack = 0, []

        for i, h in enumerate(heights):
            start = i
            while stack and stack[-1][1] > h:
                index, height = stack.pop()
                result = max(result, height * (i - index))
                start = index
            stack.append((start, h))

        for i, h in stack:
            result = max(result, h * (len(heights) - i))

        return result

