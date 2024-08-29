class Solution {
public:
    int nearestExit(vector<vector<char>>& m, vector<int>& e) {
        queue<pair<int, int>> q;
        q.push({e[0], e[1]});

        int a = 1, M = m.size(), N = m[0].size();

        vector<vector<int>> d = {{0,1},{1,0},{0,-1},{-1,0}};

        m[e[0]][e[1]] = '+';

        while(!q.empty()) {
            int l = q.size();
            for(int k = 0; k < l; k++) {
                auto [i, j] = q.front(); q.pop();

                for(int l = 0; l < 4; l++) {
                    int x = d[l][0] + i;
                    int y = d[l][1] + j;

                    if (min(x,y) < 0 || x >= M || y >= N || m[x][y] == '+') continue;
                    if (min(x,y) == 0 || x == M - 1 || y == N - 1) return a;
                    m[x][y] = '+';
                    q.push({x,y});
                }
            }
            a++;
        }   
        return -1;
    }
};
