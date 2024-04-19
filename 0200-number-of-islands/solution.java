class Solution {
    private void visit(char[][] grid, int i, int j) {
        grid[i][j] = '2';
        if (i > 0 && grid[i-1][j] == '1') visit(grid, i-1, j);
        if (i < grid.length - 1 && grid[i+1][j] == '1') visit(grid, i+1, j);
        if (j > 0 && grid[i][j-1] == '1') visit(grid, i, j-1);
        if (j < grid[i].length - 1 && grid[i][j+1] == '1') visit(grid, i, j+1);
    }

    public int numIslands(char[][] grid) {
        int ans = 0, m = grid.length, n = grid[0].length;
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                if (grid[i][j] == '1') {
                    visit(grid, i, j);
                    ans++;
                }
            }
        }
        return ans;
    }
}
