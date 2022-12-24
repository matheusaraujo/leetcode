class Solution {
public:
    vector<int> asteroidCollision(vector<int>& a) {
        vector<int> b;
        b.push_back(a[0]);
        
        for(int i = 1; i < a.size(); i++) {
            if (a[i] > 0) b.push_back(a[i]);
            else {
                int B = b.size();
                int f = 1;
                for(int j = B-1; j >= 0; j--) {
                    if (b[j] > 0) {
                        if (abs(a[i]) < b[j]) {
                            f = 0;
                            break;
                        } else if (abs(a[i]) == b[j]) {
                            b.erase(b.begin() + j);
                            f = 0;
                            break;
                        }
                        else if (abs(a[i]) > b[j]) {
                            b.erase(b.begin() + j);
                            f = 1;
                        }
                    } else {
                        f = 1;
                    }
                }
                if (f == 1) b.push_back(a[i]);
            }
        }
        
        return b;
    }
};
