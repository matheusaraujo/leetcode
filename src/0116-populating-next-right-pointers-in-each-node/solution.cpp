/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
private:
    void connect1(Node *root) {
        if(!root) return;
        if(root->left){
            root->left->next = root->right;
            root->right->next = root->next ? root->next->left : NULL;
        }
        connect(root->left);
        connect(root->right);
    }
public:
    Node* connect(Node* root) {
        connect1(root);
        return root;
    }
};
