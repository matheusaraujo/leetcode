class Solution {
private:
    float dist(int x1, int y1, int x2, int y2) {
        return sqrt(pow(x1-x2,2)+pow(y1-y2,2));
    }
public:
    vector<int> countPoints(vector<vector<int>>& p, vector<vector<int>>& q) {
        int P = p.size();
        int Q = q.size();
        auto a = vector<int>(Q);

        for(int i = 0; i < Q; i++) {
            for(int j = 0; j < P; j++) {
                if (dist(p[j][0], p[j][1], q[i][0], q[i][1]) <= q[i][2])
                    a[i]++;
            }
        }

        return a;
    }
};
