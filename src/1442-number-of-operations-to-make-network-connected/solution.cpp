class Solution {
private:
    void dfs(vector<vector<int>>& a, vector<int>& v, int i) {
        v[i] = 1;
        for(auto j : a[i])
            if (!v[j]) dfs(a, v, j);
    }

public:
    int makeConnected(int N, vector<vector<int>>& c) {
        if (c.size() < N - 1) return -1;

        auto v = vector<int>(N);
        int cl = 0;
        
        vector<vector<int>> a(N);

        for(auto b : c) {
            a[b[0]].push_back(b[1]);
            a[b[1]].push_back(b[0]);
        }

        for(int i = 0; i < N; i++)
            if (!v[i]) dfs(a, v, i), cl++;
        
        return cl - 1;
    }
};
