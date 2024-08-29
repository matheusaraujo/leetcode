class Solution {
public:
    bool canPartition(vector<int>& n) {
        int s = accumulate(n.begin(), n.end(), 0), t = s >> 1;
        if (s & 1) return false;
        vector<bool> dp(t+1, false);
        dp[0] = true;
        for(auto nn : n) {
            for(int i = t; i >= nn; i--) {
                dp[i] = dp[i] || dp[i - nn];
            }
        }
        return dp[t];
    }
};
