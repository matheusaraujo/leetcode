class Solution {
public:
    vector<int> shortestAlternatingPaths(int n, vector<vector<int>>& re, vector<vector<int>>& be) {
        vector<vector<pair<int, int>>> g(n);
        vector<int> d(n, -1);
        queue<vector<int>> q;

        for (auto e : re) g[e[0]].emplace_back(e[1], 0);
        for (auto e : be) g[e[0]].emplace_back(e[1], 1);

        q.emplace(vector<int>{0, 0, -1});

        while(!q.empty()) {
            auto f = q.front(); q.pop();
            d[f[0]] = d[f[0]] != -1 ? d[f[0]] : f[1];

            for(auto& a : g[f[0]]) {
                if (f[2] != a.second && a.first != -1) {
                    q.emplace(vector<int>{a.first, f[1] + 1, a.second});
                    a.first = -1;
                }
            }
        }

        return d;
    }
};
