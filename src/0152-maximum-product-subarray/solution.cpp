class Solution {
public:
    int maxProduct(vector<int>& n) {
        int r = n[0], N = n.size();
        for(int i = 1, imax = r, imin = r; i < N; i++) {
            if (n[i] < 0) swap(imax, imin);
            imax = max(n[i], imax * n[i]);
            imin = min(n[i], imin * n[i]);
            r = max(r, imax);
        }
        return r;
    }
};
