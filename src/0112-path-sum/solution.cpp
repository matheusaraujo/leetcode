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
    bool solve(TreeNode* node, int target, int acc) {
        if (node == NULL) return false;
        if (node->left == NULL && node->right == NULL)
            return target == acc + node->val;
        return solve(node->left, target, acc+node->val) ||
            solve(node->right, target, acc+node->val);
    }

public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        if (root == NULL) return false;
        return solve(root, targetSum, 0);
    }
};
