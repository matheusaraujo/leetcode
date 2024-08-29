class Solution {
public:
    int x, y, xLen, yLen, countZeros = 0, totalZeros = 0, res = 0, cell;
    void dfs(vector<vector<int>>& grid, int x, int y) {
        if (x < 0 || y < 0 || x == xLen || y == yLen) return;
        cell = grid[y][x];
        if (cell) {
            res += cell == 2 && countZeros == totalZeros;
            return;
        }
        grid[y][x] = -1;
        countZeros++;
        dfs(grid, x, y - 1);
        dfs(grid, x + 1, y);
        dfs(grid, x, y + 1);
        dfs(grid, x - 1, y);
        grid[y][x] = 0;
        countZeros--;
    }
    int uniquePathsIII(vector<vector<int>>& grid) {
        yLen = grid.size();
        xLen = grid[0].size();
        for (int _y = 0; _y < yLen; _y++) {
            for (int _x = 0; _x < xLen; _x++) {
                cell = grid[_y][_x];
                if (cell == 1) {
                    x = _x;
                    y = _y;
                }
                totalZeros += !cell;
            }
        }
        dfs(grid, x, y - 1);
        dfs(grid, x + 1, y);
        dfs(grid, x, y + 1);
        dfs(grid, x - 1, y);
        return res;
    }
};
