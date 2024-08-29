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
public:
    TreeNode* mergeTrees(TreeNode* t1, TreeNode* t2) {
        if (t1 == NULL && t2 == NULL) return NULL;

        TreeNode* t = new TreeNode();

        if (t1 == NULL) {
            t->val = t2->val;
            t->left = mergeTrees(NULL, t2->left);
            t->right = mergeTrees(NULL, t2->right);
        }
        else if (t2 == NULL) {
            t->val = t1->val;
            t->left = mergeTrees(t1->left, NULL);
            t->right = mergeTrees(t1->right, NULL);
        }
        else {
            t->val = t1->val + t2->val;
            t->left = mergeTrees(t1->left, t2->left);
            t->right = mergeTrees(t1->right, t2->right);
        }

        return t;
    }
};
