class Solution {
public:
    int maxProfit(vector<int>& p) {
        int N = p.size();
        if (N == 0) return 0;
        auto dp = vector(N, vector<int>(3));
        dp[0][0] = 0, dp[0][1] = -p[0], dp[0][2] = 0;
        for(int i = 1; i < N; i++) {
            dp[i][0] = max(dp[i-1][1]+p[i], dp[i-1][0]);
            dp[i][1] = max(dp[i-1][2]-p[i], dp[i-1][1]);
            dp[i][2] = max(max(dp[i-1][0],dp[i-1][1]),dp[i-1][2]);
        }
        return max(max(dp[N-1][0],dp[N-1][1]),dp[N-1][2]);
    }
};
