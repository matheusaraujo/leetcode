class Solution:
    def maxAreaOfIsland(self, grid: List[List[int]]) -> int:
        ROWS, COLS, result = len(grid), len(grid[0]), 0

        def dfs(r: int, c: int) -> int:
            if (
                r not in range(0, ROWS) or
                c not in range(0, COLS) or
                grid[r][c] != 1
            ):
                return 0

            grid[r][c] = 2

            return 1 + dfs(r - 1, c) + dfs(r + 1, c) + dfs(r, c - 1) + dfs(r, c + 1)

        for r in range(ROWS):
            for c in range(COLS):
                result = max(result, dfs(r, c))

        return result

