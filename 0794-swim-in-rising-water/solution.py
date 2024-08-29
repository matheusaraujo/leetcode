class Solution:
    def swimInWater(self, grid: List[List[int]]) -> int:
        n, visited = len(grid), set()
        minHeap = [[grid[0][0], 0, 0]]
        dirs = [[0, 1], [0, -1], [1, 0], [-1, 0]]

        visited.add((0, 0))

        while minHeap:
            t, r, c = heapq.heappop(minHeap)
            if r == n - 1 and c == n - 1: return t

            for dr, dc in dirs:
                nr, nc = r + dr, c + dc
                if (nr not in range(n) or
                    nc not in range(n) or
                    (nr, nc) in visited
                ): continue
                visited.add((nr, nc))
                heapq.heappush(minHeap, [max(t, grid[nr][nc]), nr, nc])

