class Solution {
private:
    int M, N;
    queue<pair<int, int>> q1, q2;

public:
    int maxDistance(vector<vector<int>> g) {
        M = g.size(), N = g[0].size();
        
        for(int i = 0; i < M; i++)
            for(int j = 0; j < N; j++)
                if (g[i][j] == 1)
                    q1.push({i-1,j}), q1.push({i+1,j}), q1.push({i,j-1}), q1.push({i,j+1});
        
        int c = 0;
        while(!q1.empty()) {
            c++;
            while(!q1.empty()) {
                int i = q1.front().first, j = q1.front().second;
                q1.pop();
                if (i >= 0 && i < M && j >= 0 && j < N && g[i][j] == 0) {
                    g[i][j] = c;
                    q2.push({i-1,j}), q2.push({i+1,j}), q2.push({i,j-1}), q2.push({i,j+1});
                }
            }
            swap(q1, q2);
        }
        return c == 1 ? -1 : c - 1;
    }
};
