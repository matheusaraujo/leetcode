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
class BSTIterator {
private:
  stack<TreeNode*> s;

  void find_left(TreeNode* r) {
    TreeNode* p = r;
    while(p) {
      s.push(p);
      p = p->left;
    }
  }

public:
  BSTIterator(TreeNode* root) {
    find_left(root);
  }
  
  int next() {
    TreeNode* t = s.top();
    s.pop();
    if (t->right) find_left(t->right);
    return t->val;
  }
  
  bool hasNext() {
    return !s.empty();
  }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */
