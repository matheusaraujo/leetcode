class Solution:
    def solveNQueens(self, n: int) -> List[List[str]]:
        columns, positiveDiagonal, negativeDiagonal = set(), set(), set()
        result, board = [], [["."] * n for i in range(n)]

        def backtrack(row):
            if row == n:
                result.append(["".join(r) for r in board])
                return

            for col in range(n):
                if (col in columns
                    or (row + col) in positiveDiagonal
                    or (row - col) in negativeDiagonal
                ): continue

                columns.add(col)
                positiveDiagonal.add(row + col)
                negativeDiagonal.add(row - col)
                board[row][col] = "Q"

                backtrack(row + 1)

                columns.remove(col)
                positiveDiagonal.remove(row + col)
                negativeDiagonal.remove(row - col)
                board[row][col] = "."

        backtrack(0)

        return result

