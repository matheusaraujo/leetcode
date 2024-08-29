class Solution {
private:
    int M, N;
    void visit(vector<vector<int>>& g, int i, int j) {
        if (i < 0 || i >= M || j < 0 || j >= N || g[i][j] == 0) return;
        g[i][j] = 0;
        visit(g, i+1, j);
        visit(g, i-1, j);
        visit(g, i, j+1);
        visit(g, i, j-1);
    }

public:
    int numEnclaves(vector<vector<int>>& g) {
        M = g.size();
        N = g[0].size();
        auto v = vector(M, vector<int>(N));
        int ans = 0;
        
        for(int i = 0; i < M; i++) {
            if (g[i][0] == 1) visit(g, i, 0);
            if (g[i][N-1] == 1) visit(g, i, N-1);
        }

        for(int j = 0; j < N; j++) {
            if (g[0][j] == 1) visit(g, 0, j);
            if (g[M-1][j] == 1) visit(g, M-1, j);
        }

        for(int i = 0; i < M; i++)
            for(int j = 0; j < N; j++)
                ans += g[i][j];

        return ans;
    }
};
