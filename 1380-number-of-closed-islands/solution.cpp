class Solution {
private:
    int M, N;
    bool t = false;
    
    void dfs(vector<vector<int>>& grid, int i, int j) {
        if (i < 0 || i >= M || j < 0 || j >= N) t = true;
        else if (grid[i][j] == 1) return;
        else {
            grid[i][j] = 1;
            dfs(grid, i, j+1);
            dfs(grid, i, j-1);
            dfs(grid, i+1, j);
            dfs(grid, i-1, j);
        }
        
    }
public:
    int closedIsland(vector<vector<int>>& grid) {
        int ans = 0;
        M = grid.size(), N = grid[0].size();
        for(int i = 0; i < M; i++) {
            for(int j = 0; j < N; j++) {
                if (grid[i][j] == 0) {
                    t = false;
                    dfs(grid, i, j);
                    if (!t) ans++;
                }
            }
        }
        return ans;
    }
};
