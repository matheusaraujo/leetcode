class Solution:
    def twoOutOfThree(self, nums1: List[int], nums2: List[int], nums3: List[int]) -> List[int]:
        count = {}
        for n in set(nums1): count[n] = count.get(n, 0) + 1
        for n in set(nums2): count[n] = count.get(n, 0) + 1
        for n in set(nums3): count[n] = count.get(n, 0) + 1

        res = []
        for k, v in count.items():
            if v > 1: res.append(k)

        return res

