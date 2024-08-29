/**
 * @param {character[][]} board
 * @param {string} word
 * @return {boolean}
 */
 
var _exist = function (board, word, i, j, k, arr) {

    if (arr.some(a => a.i === i && a.j === j)) return false;
    arr.push({i, j});

    if (k === word.length) return true;

    if (i > 0 && board[i-1][j] === word[k]) {
        if (_exist(board, word, i-1, j, k+1, arr))
            return true;
    }

    if (i < board.length-1 && board[i+1][j] === word[k]) {
        if (_exist(board, word, i+1, j, k+1, arr))
            return true;
    }

    if (j > 0 && board[i][j-1] === word[k]) {
        if (_exist(board, word, i, j-1, k+1, arr))
            return true;
    }

    if (j < board[i].length-1 && board[i][j+1] === word[k]) {
        if (_exist(board, word, i, j+1, k+1, arr))
            return true;
    }
    arr.pop();
    return false;
}

var exist = function(board, word) {
    for(let i = 0; i < board.length; i++) {
        for(let j = 0; j < board[i].length; j++) {
            if (board[i][j] === word[0]) {
                if(_exist(board, word, i, j, 1, []))
                    return true;
            }
        }
    }
    return false;
};
