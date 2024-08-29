class Solution {
private:
    int N;
    void color(vector<vector<int>>& g, vector<int>& v, int i, int c) {
        v[i] = c;
        for(int j = 0; j < g[i].size(); j++)
            if (v[g[i][j]] == 0) color(g, v, g[i][j], c);
        
    }
public:
    int removeStones(vector<vector<int>>& s) {
        N = s.size();
        vector<vector<int>> g(N);
        vector<int> v = vector<int>(N);
        int c = 0;
        
        for(int i = 0; i < N-1; i++)
            for(int j = i + 1; j < N; j++)
                if (s[i][0] == s[j][0] || s[i][1] == s[j][1])
                    g[i].push_back(j), g[j].push_back(i);
        
        for(int i = 0; i < N; i++)
            if (v[i] == 0) color(g, v, i, ++c);
        
        return N - c;
    }
};
