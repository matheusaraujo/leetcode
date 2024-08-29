class Solution:
    def countNegativesInRow(self, row: List[int]) -> int:
        mid, left, right = -1, 0, len(row) - 1

        while left <= right:
            mid = (left + right) // 2
            if row[mid] >= 0:
                left = mid + 1
            else:
                if mid == 0 or row[mid-1] >= 0:
                    return len(row) - mid
                else:
                    right = mid - 1

        return 0

    def countNegatives(self, grid: List[List[int]]) -> int:
        result = 0
        for row in grid:
            print(row, self.countNegativesInRow(row))
            result += self.countNegativesInRow(row)
        return result

