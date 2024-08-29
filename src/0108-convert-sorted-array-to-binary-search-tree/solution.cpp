/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
private:
  TreeNode* solve(vector<int>& n, int l, int r) {
    if (l > r) return NULL;
    int m = (l + r) / 2;
    
    return new TreeNode(
      n[m],
      solve(n, l, m-1),
      solve(n, m+1, r)
    );
  }

public:
  TreeNode* sortedArrayToBST(vector<int>& nums) {
    return solve(nums, 0, nums.size() - 1);
  }
};
