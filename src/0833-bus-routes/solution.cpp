class Solution {
public:
    int numBusesToDestination(vector<vector<int>>& r, int s, int t) {
        if (s == t) return 0;

        map<int, vector<int>> m;
        queue<int> q;
        set<int> v;
        int ans = 0;
        
        for(int i = 0; i < r.size(); i++) {
            for(int j = 0; j < r[i].size(); j++) {
                int b = r[i][j];
                auto it = m.find(b);
                if (it == m.end()) {
                    m[b] = vector<int>();
                    it = m.find(b);
                }
                vector<int> lst = it->second;
                lst.push_back(i);
                m[b] = lst;
            }
        }
        
        q.push(s);

        while(!q.empty()) {
            int len = q.size();
            ans++;
            for(int i = 0; i < len; i++) {
                int c = q.front(); q.pop();
                vector<int> b = m.find(c)->second;
                for(int j = 0; j < b.size(); j++) {
                    if (v.find(b[j]) != v.end()) continue;
                    v.insert(b[j]);
                    for(int k = 0; k < r[b[j]].size(); k++) {
                        if (r[b[j]][k] == t) return ans;
                        q.push(r[b[j]][k]);
                    }
                }
            }
        }

        return -1;
    }
};
