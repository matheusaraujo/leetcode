/**
 * Definition for a binary tree node.
 * function TreeNode(val, left, right) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.left = (left===undefined ? null : left)
 *     this.right = (right===undefined ? null : right)
 * }
 */
/**
 * @param {TreeNode} root
 * @return {number[][]}
 */
var levelOrder = function(root) {
    return _levelOrder(root, 0, []);
};

var _levelOrder = function(root, level, ans) {
    if (!root) return ans;
    if (!ans[level]) ans[level] = [];
    
    ans[level].push(root.val);

    if (root.left) ans = _levelOrder(root.left, level+1, ans);
    if (root.right) ans = _levelOrder(root.right, level+1, ans);
    
    return ans;
}
