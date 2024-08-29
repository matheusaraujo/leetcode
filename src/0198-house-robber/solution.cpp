class Solution {
public:
    int rob(vector<int>& n) {
        if (n.size() == 0) return 0;
        if (n.size() == 1) return n[0];
        if (n.size() == 2) return max(n[0], n[1]);

        int m2 = n[0];
        int m1 = max(n[0], n[1]);

        for(int i = 2; i < n.size(); i++) {
            int m = max(n[i] + m2, m1);
            m2 = m1;
            m1 = m;
        }

        return m1;
    }
};
