class Solution {
private:
    int dfs(vector<vector<int>> &a, vector<int>& v, int i) {
        int c = 0;
        v[i] = 1;
        for(auto k : a[i])
            if (!v[abs(k)]) c += dfs(a, v, abs(k)) + (k > 0);

        return c;
    }
public:
    int minReorder(int n, vector<vector<int>>& cs) {
        vector<vector<int>> a(n);

        for(auto& c: cs) {
            a[c[0]].push_back(c[1]);
            a[c[1]].push_back(-c[0]);
        }

        return dfs(a, vector<int>(n) = {}, 0);

    }
};
