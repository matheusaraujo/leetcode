class Solution {
public:
    vector<int> answerQueries(vector<int>& n, vector<int>& q) {
        sort(n.begin(), n.end());
        vector<int> ans;
        for (auto query : q) {
            int count = 0;
            for (auto num : n) {
                if (query >= num) {
                    query -= num;
                    count++;
                }
                else break;
            }
            ans.push_back(count);
        }
        return ans;
    }
};
