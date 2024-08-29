class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& m) {
        int M = m.size(), N = m[0].size();
        vector<vector<int>> d(M, vector<int>(N, INT_MAX - 10000));
        
        for(int i = 0; i < M; i++) {
            for(int j = 0; j < N; j++) {
                if (m[i][j] == 0) d[i][j] = 0;
                else {
                    if (i > 0) d[i][j] = min(d[i][j], d[i-1][j]+1);
                    if (j > 0) d[i][j] = min(d[i][j], d[i][j-1]+1);
                }
            }
        }

        for(int i = M-1; i >= 0; i--) {
            for(int j = N-1; j >= 0; j--) {
                if (i < M-1) d[i][j] = min(d[i][j], d[i+1][j]+1);
                if (j < N-1) d[i][j] = min(d[i][j], d[i][j+1]+1);
            }
        }
        return d;
    }
};
