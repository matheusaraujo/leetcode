#define matrix vector<vector<int>>
class Solution {
private:
    void solve(matrix &r, vector<int> &s, int n, int k, int b) {
        if (s.size() == k) r.push_back(s);
        else {
            for(int i = b; i <= n; i++) {
                s.push_back(i);
                solve(r, s, n, k, i+1);
                s.pop_back();
            }
        }
    }

public:
    matrix combine(int n, int k) {
        matrix r;
        vector<int> s;
        solve(r, s, n, k, 1);
        return r;
    }
};
