class Solution {
private:
    int solve(vector<int>& n, int lo, int hi) {
        int c = 0, p = 0;

        for(int i = lo; i <= hi; i++) {
            int t = c;
            c = max(c, p+n[i]);
            p = t;
        }

        return c;
    }
public:
    int rob(vector<int>& n) {
        int N = n.size();
        if (N == 1) return n[0];
        return max(solve(n, 0, N-2), solve(n, 1, N-1));
    }
};
