class Solution:
    def findLeastNumOfUniqueInts(self, arr: List[int], k: int) -> int:
        # count = {}

        # for n in arr: count[n] = 1 + count.get(n, 0)
        # arr = sorted([(val, key) for key, val in count.items()])

        # result, i = len(arr), 0
        
        # while k > 0 and i < len(arr):
        #     if arr[i][0] <= k: result -= 1
        #     k -= arr[i][0]
        #     i += 1
        
        # return result
        counter = list(Counter(arr).values())
        heapq.heapify(counter)

        while k > 0:
            k -= heapq.heappop(counter)
        return len(counter) + (k < 0)

