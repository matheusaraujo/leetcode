class Solution {
private:
    int M;
    
    int paint(vector<vector<int>>& g, int i, int j) {
        if (min(i,j) < 0 || max(i,j) == M || g[i][j] != 1) return 0;
        g[i][j] = 2;
        return 1 + paint(g, i+1, j) +
            paint(g, i-1, j) +
            paint(g, i, j+1) +
            paint(g, i, j-1);
    }

    bool expand(vector<vector<int>>& g, int i, int j, int cl) {
        if (min(i,j) < 0 || max(i,j) == M) return false;
        g[i][j] = g[i][j] == 0 ? cl + 1 : g[i][j];
        return g[i][j] == 1;
    }

public:
    int shortestBridge(vector<vector<int>>& g) {
        M = g.size();

        for(int i = 0, f = 0; !f && i < M; i++)
            for(int j = 0; !f && j < M; j++)
                f = paint(g, i, j);
        
        int cl = 1;
        while(cl++) {
            for(int i = 0; i < M; i++) {
                for(int j = 0; j < M; j++) {
                    if (g[i][j] == cl && (
                        expand(g, i+1, j, cl) ||
                        expand(g, i-1, j, cl) ||
                        expand(g, i, j+1, cl) ||
                        expand(g, i, j-1, cl)
                    )) return cl-2;
                }
            }
        }

        return 0;
    }
};


