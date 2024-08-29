class Solution {
private:
    void solve(string s, int i, vector<string> &ans) {
        if (i == s.length()) ans.push_back(s);
        else if (s[i] >= '0' && s[i] <= '9') solve(s, i+1, ans);
        else {
            solve(s, i+1, ans);
            s[i] = s[i] + (s[i] >= 'a' && s[i] <= 'z' ? -32 : 32);
            solve(s, i+1, ans);
        }
    }
public:
    vector<string> letterCasePermutation(string s) {
        vector<string> ans;
        solve(s, 0, ans);
        return ans;
    }
};
