class Solution:
    def findMedianSortedArrays(self, nums1: List[int], nums2: List[int]) -> float:
        array1 = nums1 if len(nums1) < len(nums2) else nums2
        array2 = nums2 if len(nums1) < len(nums2) else nums1
        # array1, array2 = nums1, nums2
        # if len(array2) < len(array1):
        #     array1, array2 = array2, array1
        total = len(array1) + len(array2)
        half = total // 2

        left, right = 0, len(array1) - 1

        while True:
            mid1 = (left + right) // 2
            mid2 = half - mid1 - 2

            array1Left = array1[mid1] if mid1 >= 0 else -math.inf
            array1Right = array1[mid1 + 1] if mid1 + 1 < len(array1) else math.inf
            array2Left = array2[mid2] if mid2 >= 0 else -math.inf
            array2Right = array2[mid2 + 1] if mid2 + 1 < len(array2) else math.inf

            if array1Left <= array2Right and array2Left <= array1Right:
                if total % 2: return min(array1Right, array2Right)
                else: return (max(array1Left, array2Left) + min(array1Right, array2Right)) / 2
            elif array1Left > array2Right: right = mid1 - 1
            else: left = mid1 + 1

