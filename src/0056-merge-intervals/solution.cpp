class Solution {
private:
    bool isOverlap(vector<int>& a, vector<int>& b) {
        return min(a[1], b[1]) - max(a[0], b[0]) >= 0;
    }

    vector<int> merge(vector<int>& a, vector<int>& b) {
        return {min(a[0], b[0]), max(a[1], b[1])};
    }

    static bool compare(vector<int> a, vector<int> b) {
        return a[0] < b[0];
    }
    
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        sort(intervals.begin(), intervals.end(), compare);

        vector<vector<int>> ans;
        for(int i = 0; i < intervals.size(); i++) {
            vector<int> currInterval = {intervals[i][0], intervals[i][1]};

            while(i < intervals.size() && isOverlap(currInterval, intervals[i])) {
                currInterval = merge(currInterval, intervals[i]);
                i++;
            }

            i--;
            ans.push_back(currInterval);
        }
        return ans;
    }
};
