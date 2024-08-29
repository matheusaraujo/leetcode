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
  int kthSmallest(TreeNode* r, int k) {
    stack<TreeNode*> s;

    while(true) {
      while(r) {
        s.push(r);
        r = r->left;
      }
      r = s.top(), s.pop();
      if (--k == 0) return r->val;
      r = r->right;
    }

  }
};
