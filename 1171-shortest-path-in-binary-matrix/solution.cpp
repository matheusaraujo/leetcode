class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& g) {
        int M = g.size(), N = g[0].size();
        if (g[0][0] == 1 || g[M-1][N-1] == 1) return -1;

        queue<vector<int>> q;
        vector<vector<int>> d = {{0,1},{0,-1},{1,0},{-1,0},{-1,-1},{1,-1},{1,1},{-1,1}};
        auto v = vector(M, vector<int>(N));
        auto a = 1;

        q.push({0, 0});
        
        while(!q.empty()) {
            int s = q.size();
            for(int i = 0; i < s; i++) {
                auto p = q.front(); q.pop();
                if (p[0] == M-1 && p[1] == N-1) return a;
                for(int k = 0; k < 8; k++) {
                    auto x = d[k][0] + p[0];
                    auto y = d[k][1] + p[1];

                    if (x >= 0 && x < M && y >= 0 && y < N && v[x][y] == 0 && g[x][y] == 0)
                        q.push({x,y}), v[x][y] = 1;
                }
            }
            a++;
        }

        return -1;


        return -1;
    }
};
