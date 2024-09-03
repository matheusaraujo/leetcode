class Solution:
    def longestIncreasingPath(self, matrix: List[List[int]]) -> int:
        dp = {}

        def dfs(row, col, val):
            if row not in range(len(matrix)) \
                or col not in range(len(matrix[0])) \
                or matrix[row][col] <= val:
                return 0

            if (row, col) in dp: return dp[(row, col)]

            result = 1
            result = max(result, 1 + dfs(row + 1, col, matrix[row][col]))
            result = max(result, 1 + dfs(row, col + 1, matrix[row][col]))
            result = max(result, 1 + dfs(row - 1, col, matrix[row][col]))
            result = max(result, 1 + dfs(row, col - 1, matrix[row][col]))
            dp[(row, col)] = result
            return result

        for row in range(len(matrix)):
            for col in range(len(matrix[0])):
                dfs(row, col, -1)

        return max(dp.values())

