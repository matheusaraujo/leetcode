class Solution {
private:
    bool bfs(int s, vector<vector<int>>& a, vector<int>& c) {
        queue<int> q;
        q.push(s);
        c[s] = 0;

        while(!q.empty()) {
            int n = q.front();
            q.pop();

            for(auto& m : a[n]) {
                if (c[m] == c[n]) return false;
                if (c[m] == -1) {
                    c[m] = 1 - c[n];
                    q.push(m);
                }
            }
        }
        return true;
    }

public:
    bool possibleBipartition(int n, vector<vector<int>>& dislikes) {
        vector<vector<int>> a(n+1);
        for(auto& d : dislikes) {
            a[d[0]].push_back(d[1]);
            a[d[1]].push_back(d[0]);
        }

        vector<int> c(n+1, -1);
        
        for(int i = 1; i <= n; i++)
            if (c[i] == -1 && !bfs(i, a, c)) return false;
        for(int i = 1; i <= n;i++)
            cout << c[i] << endl;
        return true;
    }
};
