/**
 * @param {number[][]} matrix
 * @return {number}
 */
var minFallingPathSum = function(matrix) {
  const [m, n] = [matrix.length, matrix[0].length];
  let map = {};
  
  const solve = (i, j) => {
    if (j < 0 || j === n) return Infinity;
    if (i === 0) return matrix[i][j];
    let k = `${i},${j}`;
    if (!map[k])
      map[k] = matrix[i][j] + Math.min(
        solve(i - 1, j - 1),
        solve(i - 1, j),
        solve(i - 1, j + 1)
      );
    return map[k];
  }

  let min = Infinity;

  for(let j = 0; j < n; j++)
    min = Math.min(min, solve(m-1, j));

  return min;
};
