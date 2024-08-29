class Solution:
    def solve(self, board: List[List[str]]) -> None:
        rows, cols = len(board), len(board[0])

        def mark(r, c):
            if (
                r not in range(rows) or
                c not in range(cols) or
                board[r][c] != "O"
            ): return
            board[r][c] = "M"
            mark(r + 1, c)
            mark(r, c + 1)
            mark(r - 1, c)
            mark(r, c - 1)

        for r in range(rows):
            for c in range(cols):
                if (
                    board[r][c] == "O" and
                    (r == 0 or r == rows - 1 or c == 0 or c == cols - 1)
                ): mark(r, c)

        for r in range(rows):
            for c in range(cols):
                if board[r][c] == "O": board[r][c] = "X"

        for r in range(rows):
            for c in range(cols):
                if board[r][c] == "M": board[r][c] = "O"
        
