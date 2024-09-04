class Solution:
    def updateMatrix(self, matrix: List[List[int]]) -> List[List[int]]:
        queue, visited = deque(), set()
        
        for i in range(len(matrix)):
            for j in range(len(matrix[0])):
                if matrix[i][j] == 0:
                    visited.add((i, j))
                    queue.append((i, j))

        def visit(x, y, val):
            if x not in range(len(matrix)): return
            if y not in range(len(matrix[0])): return
            if (x, y) in visited: return
            matrix[x][y] = val
            visited.add((x, y))
            queue.append((x, y))

        while queue:
            x, y = queue.popleft()
            visit(x + 1, y, matrix[x][y] + 1)
            visit(x - 1, y, matrix[x][y] + 1)
            visit(x, y + 1, matrix[x][y] + 1)
            visit(x, y - 1, matrix[x][y] + 1)

        return matrix


