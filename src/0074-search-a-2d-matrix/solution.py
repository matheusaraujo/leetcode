class Solution:
    def searchMatrix(self, matrix: List[List[int]], target: int) -> bool:
        M, N = len(matrix), len(matrix[0])

        def mapping(n: int) -> [int, int]:
            return [n // N, n % N]

        left, right = 0, M*N-1

        while left <= right:
            mid = (left + right) // 2
            m = mapping(mid)

            if matrix[m[0]][m[1]] == target:
                return True
            elif matrix[m[0]][m[1]] < target:
                left = mid + 1
            else:
                right = mid - 1

        return False


