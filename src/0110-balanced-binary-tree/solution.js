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
 * @return {boolean}
 */
var isBalanced = function(root) {
  const getHeight = (r) => {
    if (!r) return 0;
    const left = getHeight(r.left);
    const right = getHeight(r.right);
    if (left === -1 || right === -1) return -1
    else if (Math.abs(left - right) > 1) return -1
    else return Math.max(left, right) + 1;
  }
  return getHeight(root) !== -1;
};
