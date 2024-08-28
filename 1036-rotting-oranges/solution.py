class Solution:
    def orangesRotting(self, grid: List[List[int]]) -> int:
        rows, cols = len(grid), len(grid[0])
        queue, fresh, time = deque(), 0, 0

        for r in range(rows):
            for c in range(cols):
                if grid[r][c] == 1: fresh += 1
                elif grid[r][c] == 2: queue.append((r, c))

        while fresh and queue:
            for i in range(len(queue)):
                r, c = queue.popleft()
                for dr, dc in [[0, 1], [0, -1], [1, 0], [-1, 0]]:
                    row, col = r + dr, c + dc
                    if (
                        row in range(rows) and
                        col in range(cols) and
                        grid[row][col] == 1
                    ):
                        grid[row][col] = 2
                        queue.append((row, col))
                        fresh -= 1
            time += 1

        return -1 if fresh else time

