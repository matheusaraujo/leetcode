class Solution {
public:
    int maximumBags(vector<int>& c, vector<int>& r, int ar) {
        for(int i = 0; i < c.size(); i++)
            c[i] -= r[i];

        sort(c.begin(), c.end());

        int a = 0;
        for(int i = 0; i < c.size() && ar > 0; i++) {
            if (c[i] == 0) a++;
            else if (ar >= c[i]) ar -= c[i], a++;
        }

        return a;
    }
};
