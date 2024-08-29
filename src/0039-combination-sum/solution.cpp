class Solution {
private:
    void solve(vector<int>& c, int t, vector<vector<int>>& ans, vector<int>& r, int i) {
        if (t == 0) {
            ans.push_back(r);
        } else {
            while(i < c.size() && t - c[i] >= 0) {
                r.push_back(c[i]);
                solve(c, t-c[i], ans, r, i);
                i++;
                r.pop_back();
            }
        }
    }
public:
    vector<vector<int>> combinationSum(vector<int>& c, int t) {
        sort(c.begin(), c.end());
        c.erase(unique(c.begin(), c.end()), c.end());
        vector<int> r;
        vector<vector<int>> ans;
        solve(c, t, ans, r, 0);
        return ans;
    }
};
