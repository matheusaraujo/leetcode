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
    bool solve(TreeNode* node, int k, map<int, bool> &m) {
        if (!node) return false;
        if (m[k-node->val]) return true;
        m[node->val] = true;
        return solve(node->left, k, m) || solve(node->right, k, m); 
    }
public:
    bool findTarget(TreeNode* root, int k) {
        map<int, bool> m;
        return solve(root, k, m);
    }
};
