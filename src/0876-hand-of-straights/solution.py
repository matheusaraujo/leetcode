class Solution:
    def isNStraightHand(self, hand: List[int], groupSize: int) -> bool:
        if len(hand) % groupSize: return False

        count = {}
        for n in hand:
            count[n] = 1 + count.get(n, 0)

        minHeap = list(count.keys())
        heapq.heapify(minHeap)

        while minHeap:
            first = minHeap[0]
            for n in range(first, first + groupSize):
                if n not in count: return False
                count[n] -= 1
                if count[n] == 0:
                    if n != minHeap[0]: return False
                    heapq.heappop(minHeap)

        return True


