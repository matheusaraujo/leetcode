/**
 * @param {number[][]} grid
 * @return {number[]}
 */
var findBall = function(grid) {
  const m = grid.length;
  const n = grid[0].length;
  let ans = _.range(n);

  const isBlocked = (i, j) => 
    (j === 0 && grid[i][j] === -1) || 
    (j === n-1 && grid[i][j] === 1) ||
    (j < n-1 && grid[i][j] === 1 && grid[i][j+1] === -1) || 
    (j > 0 && grid[i][j] === -1 && grid[i][j-1] === 1);

  for(let i = 0; i < m; i++) {
    for(let j = 0; j < n; j++) {
      if (ans[j] == -1 || isBlocked(i, ans[j]))
        ans[j] = -1;
      else
        ans[j] = grid[i][ans[j]] === 1 ? ans[j]+1 : ans[j]-1;
    }
  }
  
  return ans;
};
