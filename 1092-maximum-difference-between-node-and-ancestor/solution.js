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
var maxAncestorDiff = function(root) {
  const solve = function (node, anc, max) {
    if (!node) return 0;
    
    for(let i = 0; i < anc.length; i++)
      max = Math.max(max, Math.abs(node.val - anc[i]));
    
    anc.push(node.val)
    const left = solve(node.left, anc, max);
    const right = solve(node.right, anc, max);
    anc.pop();

    return Math.max(max, Math.max(left, right));
  }
  return solve(root, [], 0);
};
