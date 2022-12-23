class Solution {
private:
    int M, N;
    bool dfs(vector<vector<int>>& g1, vector<vector<int>>& g2, int i, int j) {
        if (i < 0 || i >= M || j < 0 || j >= N || g2[i][j] == 0) return true;

        g2[i][j] = 0;
        
        bool r1 = dfs(g1, g2, i+1, j);
        bool r2 = dfs(g1, g2, i-1, j);
        bool r3 = dfs(g1, g2, i, j+1);
        bool r4 = dfs(g1, g2, i, j-1);

        return r1 && r2 && r3 && r4 && g1[i][j] == 1;
    }
public:
    int countSubIslands(vector<vector<int>>& g1, vector<vector<int>>& g2) {
        M = g1.size();
        N = g1[0].size();

        int ans = 0;

        for(int i = 0; i < M; i++) {
            for(int j = 0; j < N; j++) {
                if (g2[i][j] == 1 && dfs(g1, g2, i, j)) {
                    ans++;
                }
            }
        }

        return ans;
    }
};
