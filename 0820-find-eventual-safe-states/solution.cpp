class Solution {
private:
    bool dfs(vector<vector<int>>& g, int i, vector<int>& c) {
        if (c[i] != 0) return c[i] == 1;

        c[i] = 2;
        for(int k = 0; k < g[i].size(); k++)
            if (!dfs(g, g[i][k], c)) return false;
        
        c[i] = 1;
        return true;
    }

public:
    vector<int> eventualSafeNodes(vector<vector<int>>& g) {
        vector<int> a;
        if (g.size() == 0) return a;
        
        int N = g.size();
        vector<int> c = vector<int>(g.size());

        for(int i = 0; i < N; i++)
            if (dfs(g, i, c)) a.push_back(i);
        
        return a;
    }
};
