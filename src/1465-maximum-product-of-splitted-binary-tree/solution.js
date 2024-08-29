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
 * @return {number}
 */
var maxProduct = function(root) {
    let max = 0, total = 0;
    const solve = (node) => {
      if (!node) return 0;
      const left = solve(node.left);
      const right = solve(node.right);
      const curr = left + right + node.val;
      max = Math.max(max, 
        (total - left) * left,
        (total - right) * right);
      return curr;
    }
    total = solve(root);
    solve(root);
    return (max % (10**9+7));
};
