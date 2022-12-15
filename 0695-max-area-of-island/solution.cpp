class Solution {
public:
  int dfs(vector<vector<int>>& g, int i, int j) {
    if (i >= 0 && j >= 0 && i < g.size() && j < g[i].size() && g[i][j] == 1) {
      g[i][j] = 2;
      return 
        dfs(g, i-1, j) +
        dfs(g, i+1, j) +
        dfs(g, i, j-1) +
        dfs(g, i, j+1) + 1;
    }
    return 0;
  }

  int maxAreaOfIsland(vector<vector<int>>& g) {
    int m = 0;
    for(int i = 0; i < g.size(); i++)
      for(int j = 0; j < g[i].size(); j++)
        if (g[i][j] == 1) m = max(m, dfs(g, i, j));
    return m;
  }
};
