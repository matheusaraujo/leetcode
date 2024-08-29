/**
 * @param {number[][]} matrix
 * @param {number} target
 * @return {boolean}
 */
var searchMatrix = function(matrix, target) {
  const m = matrix.length, n = matrix[0].length;
  for(let i = 0; i < m; i++) {
    if (target >= matrix[i][0] && (i === m - 1 || target < matrix[i+1][0])) {
      let b = 0, e = n;
      while(b <= e) {
        let c = Math.floor((b + e)/2);
        if (matrix[i][c] === target) return true;
        else if (matrix[i][c] < target) b++;
        else e--;
      }
    }
  }
  return false;  
};
