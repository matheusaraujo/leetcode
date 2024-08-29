#define graph vector<vector<int>>
class Solution {
private:
  int M, N;

  void dfs(graph& h, set<vector<int>>& v, int i, int j) {
    if (v.count({i,j})) return;
    v.insert({i,j});

    if (i > 0 && h[i][j] <= h[i-1][j]) dfs(h, v, i-1, j);
    if (i < M-1 && h[i][j] <= h[i+1][j]) dfs(h, v, i+1, j);
    if (j > 0 && h[i][j] <= h[i][j-1]) dfs(h, v, i, j-1);
    if (j < N-1 && h[i][j] <= h[i][j+1]) dfs(h, v, i, j+1);
  }
  
  set<vector<int>> pacific(graph& g) {
    set<vector<int>> v;
    for (int i = 0; i < M; i++) dfs(g, v, i, 0);
    for (int j = 0; j < N; j++) dfs(g, v, 0, j);
    return v;
  }

  set<vector<int>> atlantic(graph& g) {
    set<vector<int>> v;
    for (int i = 0; i < M; i++) dfs(g, v, i, N-1);
    for (int j = 0; j < N; j++) dfs(g, v, M-1, j);
    return v;
  }


public:
  vector<vector<int>> pacificAtlantic(graph& g) {
    M = g.size();
    N = g[0].size();

    set<vector<int>> p = pacific(g);
    set<vector<int>> a = atlantic(g);
    vector<vector<int>> ans;

    for(set<vector<int>>::iterator i = p.begin(); i != p.end(); i++) {
      if (a.count(*i))
        ans.push_back(*i);
    }

    return ans;
  }
};
