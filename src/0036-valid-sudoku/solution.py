class Solution:
    def isValidRow(self, row: List[str]) -> bool:
        numbers = set()
        for cell in row:
            if cell != "." and cell in numbers:
                return False
            numbers.add(cell)
        return True

    def isValidCol(self, board: List[List[str]], col: int) -> bool:
        numbers = set()
        for row in range(9):
            if board[row][col] != "." and board[row][col] in numbers:
                return False
            numbers.add(board[row][col])
        return True

    def isValidBox(self, board: List[List[str]], r: int, c: int) -> bool:
        numbers = set()
        for row in range(r, r + 3):
            for col in range(c, c + 3):
                if board[row][col] != "." and board[row][col] in numbers:
                    return False
                numbers.add(board[row][col])
        return True

    def isValidSudoku(self, board: List[List[str]]) -> bool:
        for row in board:
            if not self.isValidRow(row):
                return False

        for col in range(9):
            if not self.isValidCol(board, col):
                return False

        for row in (0, 3, 6):
            for col in (0, 3, 6):
                if not self.isValidBox(board, row, col):
                    return False

        return True


