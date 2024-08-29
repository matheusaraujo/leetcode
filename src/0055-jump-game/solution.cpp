class Solution {
public:
    bool canJump(vector<int>& n) {
        int mx = 0, tg = n.size() - 1;

        for(int i = 0; mx >= i && mx < tg; i++)
            mx = max(mx, i + n[i]);
        
        return mx >= tg;
    }
};
