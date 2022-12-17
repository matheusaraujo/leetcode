class Solution {
private:
    int M, N;
    
    bool check(vector<vector<int>>& g, queue<vector<int>>& q, int i, int j) {
        if (i > -1 && i < M && j > -1 && j < N && g[i][j] == 1) {
            g[i][j] = 2;
            q.push({i, j});
            return true;
        }
        return false;
    }

    int bfs(vector<vector<int>>& g, queue<vector<int>>& q, int c) {
        int t = 0;
        while(!q.empty()) {
            int s = q.size();
            for(int k = 0; k < s; k++) {
                vector<int> a = q.front(); q.pop();
                int i = a[0], j = a[1];
                if (check(g, q, i-1, j)) c--;
                if (check(g, q, i+1, j)) c--;
                if (check(g, q, i, j-1)) c--;
                if (check(g, q, i, j+1)) c--;
            }
            t++;
        }
        return c != 0 ? -1 : max(0, t-1);
    }

public:
    int orangesRotting(vector<vector<int>>& g) {
        M = g.size(), N = g[0].size();
        int ans = -1, c = 0;
        queue<vector<int>> q;

        for(int i = 0; i < M; i++) {
            for(int j = 0; j < N; j++) {
                if (g[i][j] == 1) c++;
                else if (g[i][j] == 2) q.push({i,j});
            }
        }

        return bfs(g, q, c);
    }
};
