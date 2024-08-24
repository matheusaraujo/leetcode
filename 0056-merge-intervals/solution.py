class Solution:
    def merge(self, intervals: List[List[int]]) -> List[List[int]]:
        intervals.sort(key=lambda i: i[0])
        result = [intervals[0]]

        for start, end in intervals:
            prevEnd = result[-1][1]
            if start > prevEnd:
                result.append([start, end])
            else:
                result[-1][1] = max(prevEnd, end)

        return result

