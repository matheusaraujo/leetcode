class Solution {
public:
    int threeSumClosest(vector<int>& n, int t) {
        sort(n.begin(), n.end());
        int c = n[0] + n[1] + n[2];

        for(int i = 0; i < n.size()-2; i++) {
            int lo = i + 1, hi = n.size()-1;
            while(lo < hi) {
                int tmp = n[i] + n[lo] + n[hi];
                c = abs(t-c) < abs(t-tmp) ? c : tmp;
                if (tmp == t) return tmp;
                else if (tmp > t) hi--;
                else lo++;
            }
        }

        return c;
    }
};
