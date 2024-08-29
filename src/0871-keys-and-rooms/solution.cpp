class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        
        queue<int> q;
        vector<bool> v = vector<bool>(rooms.size());

        q.push(0);

        while(!q.empty()) {
            int t = q.front();
            q.pop();
            v[t] = true;

            for(int i = 0; i < rooms[t].size(); i++) {
                int p = rooms[t][i];
                if (!v[p]) q.push(p);
            }
        }

        for(int i = 0; i < v.size(); i++)
            if (!v[i]) return false;

        return true;
    }
};
