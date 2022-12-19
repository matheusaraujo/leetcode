class Solution {
private:
    void solve(vector<vector<int>> &ans, vector<int> curr, vector<int> nums, int curr_idx) {
        curr.push_back(nums[curr_idx]);
        nums.erase(nums.begin() + curr_idx);
        if (nums.empty()) ans.push_back(curr);
        else
            for(int i = 0; i < nums.size(); i++)
                solve(ans, curr, nums, i);

    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        for(int i = 0; i < nums.size(); i++) {
            vector<int> tmp;
            solve(ans, tmp, nums, i);
        }
        return ans;
    }
};
