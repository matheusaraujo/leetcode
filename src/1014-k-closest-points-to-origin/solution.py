class Solution:
    def __buildMinHeap(self, points: List[List[int]]) -> List[Tuple[int, int, int]]:
        minHeap = []
        for x, y in points:
            dist = (x ** 2) + (y ** 2)
            minHeap.append((dist, x, y))
        heapq.heapify(minHeap)
        return minHeap

    def kClosest(self, points: List[List[int]], k: int) -> List[List[int]]:
        minHeap, result = self.__buildMinHeap(points), []

        for _ in range(k):
            _, x, y = heapq.heappop(minHeap)
            result.append((x, y))

        return result


