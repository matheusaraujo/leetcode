class Solution {
public:
    int minStoneSum(vector<int>& p, int k) {
        priority_queue<int> h(p.begin(), p.end());
        auto a = accumulate(p.begin(), p.end(), 0);

        while(k--) {
            auto b = h.top(); h.pop();
            h.push(b - b / 2);
            a -= b / 2;
        }

        return a;
    }
};
