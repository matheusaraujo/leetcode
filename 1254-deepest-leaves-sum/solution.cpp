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
    int max, sum;
    void solve(TreeNode* node, int level) {
        if (node == NULL) return;
        if (level > max) max = level, sum = node->val;
        else if (level == max) sum += node->val;
        solve(node->left, level+1);
        solve(node->right, level+1);
    }
public:
    int deepestLeavesSum(TreeNode* root) {
        max = sum = 0;
        solve(root, 0);
        return sum;
    }
};
