class Solution {
private:
    vector<set<int>> graph;
    vector<int> ans;
    vector<int> count;
    int N;

    void dfs(int node, int parent) { 
        for(auto child : graph[node]) {
            if (child != parent) {
                dfs(child, node);
                count[node] += count[child];
                ans[node] += ans[child] + count[child];
            }
        }
    }

    void dfs2(int node, int parent) { 
        for(auto child : graph[node]) {
            if (child != parent) {
                ans[child] = ans[node] - count[child] + N - count[child];
                dfs2(child, node);
            }
        }
    }
public:
    vector<int> sumOfDistancesInTree(int n, vector<vector<int>>& edges) {
        N = n;
        graph = vector<set<int>>(N);
        ans = vector<int>(N);
        count = vector<int>(N, 1);
        
        for(auto e : edges) {
            graph[e[0]].insert(e[1]);
            graph[e[1]].insert(e[0]);
        }

        dfs(0, -1);
        dfs2(0, -1);

        return ans;
    }
};
