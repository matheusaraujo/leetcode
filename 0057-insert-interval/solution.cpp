class Solution {
private:
    bool isOverlap(vector<int>& a, vector<int>& b) {
        return min(a[1], b[1]) - max(a[0], b[0]) >= 0;
    }

    vector<int> merge(vector<int>& a, vector<int>& b) {
        return {min(a[0], b[0]), max(a[1], b[1])};
    }

    void insertInterval(vector<vector<int>> &intervals, vector<int>& newInterval) {
        bool inserted = false;
        for(int i = 0; i < intervals.size(); i++) {
            if(newInterval[0] < intervals[i][0]) {
                intervals.insert(intervals.begin() + i, newInterval);
                inserted = true;
                break;
            }
        }
        if (!inserted) intervals.push_back(newInterval);
    }

public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        insertInterval(intervals, newInterval);

        vector<vector<int>> ans;
        for(int i = 0; i < intervals.size(); i++) {
            vector<int> currInterval = { intervals[i][0], intervals[i][1] };
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
