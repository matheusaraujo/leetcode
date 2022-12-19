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
    vector<int> rightSideView(TreeNode* root) {
        vector<int> a;
        if (!root) return a;
        queue<TreeNode*> q;
        q.push(root);

        while(!q.empty()) {
            int s = q.size();
            a.push_back(q.back()->val);
            while(s-- > 0) {
                auto n = q.front();
                q.pop();
                if (n->left) q.push(n->left);
                if (n->right) q.push(n->right);
            }
        }

        return a;
    }
};
