class Solution:
    def minInterval(self, intervals: List[List[int]], queries: List[int]) -> List[int]:
        intervals.sort()
        minHeap, result, i = [], {}, 0

        for query in sorted(queries):
            while i < len(intervals) and intervals[i][0] <= query:
                left, right = intervals[i]
                heapq.heappush(minHeap, (right - left + 1, right))
                i += 1
            while minHeap and minHeap[0][1] < query:
                heapq.heappop(minHeap)
            result[query] = minHeap[0][0] if minHeap else -1

        return [result[q] for q in queries]


