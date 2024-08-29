# The isBadVersion API is already defined for you.
# def isBadVersion(version: int) -> bool:

class Solution:
    def firstBadVersion(self, n: int) -> int:
        left, right = 1, n + 1

        # 0 0 0 0 1 1 1 1

        while left <= right:
            mid = (left + right) // 2
            badVersion = isBadVersion(mid)
            if badVersion:
                if mid == 1:
                    return 1
                elif not isBadVersion(mid - 1):
                    return mid
                else:
                    right = mid - 1
            else:
                left = mid + 1




