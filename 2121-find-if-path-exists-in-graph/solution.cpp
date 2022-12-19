class Solution {
private:
    bool dfs(unordered_map<int, vector<int>>& g, vector<bool>& v, int c, int d) {
        if (c == d) return true;
        if (v[c]) return false;
        
        v[c] = true;
        for(auto& n : g[c])
            if (dfs(g, v, n, d)) return true;
        return false;
    }
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        unordered_map<int, vector<int>> g;
        vector<bool> v(n);

        for(auto e : edges) {
            int a = e[0], b = e[1];
            g[a].push_back(b);
            g[b].push_back(a);
        }

        return dfs(g, v, source, destination);        
    }
};
