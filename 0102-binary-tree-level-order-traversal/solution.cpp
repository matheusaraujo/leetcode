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
    vector<vector<int>> ans;

    void solve(TreeNode* root, int level) {
        if (!root) return;
        if (ans.size() < level) ans.push_back(vector<int>());
        
        ans.at(level-1).push_back(root->val);

        solve(root->left, level+1);
        solve(root->right, level+1);
    }

public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        ans = vector<vector<int>>(0);
        solve(root, 1);
        return ans;
    }
};
