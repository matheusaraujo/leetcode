class Solution:
    # def findKthLargest(self, nums: List[int], k: int) -> int:
    #     heapq.heapify(nums)
    #     k = len(nums) - k
    #     while k:
    #         heapq.heappop(nums)
    #         k -= 1
    #     return heapq.heappop(nums)

    def findKthLargest(self, nums: List[int], k: int) -> int:
        l, r = 0, len(nums)

        def partition(l, r, p):
            pivot = nums[p]
            i = l+1
            nums[l], nums[p] = nums[p], nums[l]
            while i < r:
                if nums[i] > pivot:
                    nums[l], nums[i] = nums[i], nums[l]
                    i, l = i + 1, l + 1
                elif nums[i] == pivot: i += 1
                else:
                    r -= 1
                    nums[i], nums[r] = nums[r], nums[i]
            return l, i

        while True:
            p = randint(l, r-1)
            m, i = partition(l, r, p)
            if m < k <= i: return nums[m]
            elif k <= m: r = m
            elif k > i: l = i


