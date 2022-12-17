class Solution {
public:
    vector<int> findOrder(int N, vector<vector<int>>& pre) {
        map<int, vector<int>> adj;
        vector<int> ind = vector<int>(N);
        vector<int> ord = vector<int>(N);

        for(int i = 0; i < pre.size(); i++) {
            int t = pre[i][0];
            int s = pre[i][1];

            auto it = adj.find(s);
            if (it == adj.end()) {
                adj[s] = vector<int>();
                it = adj.find(s);
            }
            vector<int> lst = it->second;
            lst.push_back(t);
            ind[t]++;
            adj[s] = lst;
        }

        for(auto i = adj.begin(); i != adj.end(); i++) {
            cout << i->first << endl;
            for(auto j = i->second.begin(); j != i->second.end(); j++)
                cout << *j << " ";
            cout << endl;
        }

        queue<int> q;
        for(int i = 0; i < N; i++)
            if (ind[i] == 0) q.push(i);
        
        int i = 0;
        while(!q.empty()) {
            int n = q.front(); q.pop();
            ord[i++] = n;

            auto it = adj.find(n);
            if (it != adj.end()) {
                for(int j = 0; j < it->second.size(); j++) {
                    int m = it->second[j];
                    if (--ind[m] == 0) q.push(m);
                }
            }
        }

        return i == N ? ord : vector<int>(0);
    }
};
