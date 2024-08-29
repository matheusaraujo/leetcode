class Solution {
private:
    int dfs(int i, vector<int>& m, vector<int>& it) {
        if (m[i] != -1) {
            it[i] += dfs(m[i],  m, it);
            m[i] = -1;
        }
        return it[i];
    }

public:
    int numOfMinutes(int n, int headID, vector<int>& m, vector<int>& it) {
        int a = 0;
        for(int i = 0; i < n; i++) a = max(a, dfs(i, m, it));
        return a;
    }
};
