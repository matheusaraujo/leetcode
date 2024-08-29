/**
 * @param {character[][]} board
 * @return {boolean}
 */

var isValidRow = function(board, row) {
    let s = new Array(9).fill(false);
    for(let i = 0; i < 9; i++) {
        let n = board[row][i];
        if (n && n != '.' && s[n]) return false;
        if (n && n != '.') s[n] = true;
    }
    return true;
}

var isValidColumn = function(board, col) {
    let s = new Array(9).fill(false);
    for(let i = 0; i < 9; i++) {
        let n = board[i][col];
        if (n && n != '.' && s[n]) return false;
        if (n && n != '.') s[n] = true;
    }
    return true;
}

var isValidBlock = function(board, ii, jj) {
    let s = new Array(9).fill(false);
    for(let i = 0; i < 3; i++) {
        for(let j = 0; j < 3; j++) {
            let n = board[i+ii][j+jj];
            if (n && n != '.' && s[n]) return false;
            if (n && n != '.') s[n] = true;
        }
    }
    return true;
}

var isValidSudoku = function(board) {
    for(let i = 0; i < 9; i++) {
        if (!isValidColumn(board, i)) return false;
        if (!isValidRow(board, i)) return false;
    }
    for(let i = 0; i < 9; i+=3) {
        for(let j = 0; j < 9; j+=3) {
            if (!isValidBlock(board, i, j)) return false;
        }
    }
    return true;
};
