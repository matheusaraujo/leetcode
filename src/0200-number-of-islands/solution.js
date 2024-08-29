/**
 * @param {character[][]} grid
 * @return {number}
 */
var numIslands = function(grid) {
  let m = grid.length;
  let n = grid[0].length;
  let ans = 1;

  let dfs = function(g, i, j, c) {
    if (g[i] && g[i][j] && g[i][j] === '1') {
      g[i][j] = c;
      g = dfs(g, i-1, j, c);
      g = dfs(g, i+1, j, c);
      g = dfs(g, i, j-1, c);
      g = dfs(g, i, j+1, c);
    }
    return g;
  }

  for(let i = 0; i < m; i++) {
    for(let j = 0; j < n; j++) {
      if (grid[i][j] === '1')
        grid = dfs(grid, i, j, (++ans).toString())
    }
  }

  return ans-1;  
};
