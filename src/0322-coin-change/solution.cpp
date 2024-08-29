class Solution {
public:
    int coinChange(vector<int>& c, int a) {
        int m = a + 1;
        vector<int> dp = vector<int>(m, m);
        dp[0] = 0;
        for(int i = 1; i <= a; i++)
            for(int j = 0; j < c.size(); j++)
                if (c[j] <= i) dp[i] = min(dp[i], dp[i - c[j]]+1);
        
        return dp[a] > a ? -1 : dp[a];
    }
};
