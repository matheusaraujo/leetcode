class Solution {
private:
    void dfs(vector<vector<int>>& g, vector<vector<int>>& a, vector<int>& p, int i) {
        p.push_back(i);
        if (i == g.size() - 1) a.push_back(p);
        else for (auto j : g[i]) dfs(g, a, p, j);
        p.pop_back();
    }

public:
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& g) {
        vector<vector<int>> a;
        vector<int> p;
        dfs(g, a, p, 0);
        return a;
    }
};
