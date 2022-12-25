class Solution {
private:
    int N;
    void dfs(vector<vector<int>>& a, vector<int>& v, int i, int c) {
        v[i] = c;
        for(int k = 0; k < N; k++)
            if (v[k] == 0 && a[i][k] == 1) dfs(a, v, k, c);
    }

public:
    int findCircleNum(vector<vector<int>>& a) {
        N = a.size();
        int c = 0;
        auto v = vector<int>(N);

        for(int i = 0; i < N; i++)
            if (v[i] == 0) dfs(a, v, i, ++c);
        return c;
    }
};
