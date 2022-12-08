/**
 * Definition for a binary tree node.
 * function TreeNode(val, left, right) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.left = (left===undefined ? null : left)
 *     this.right = (right===undefined ? null : right)
 * }
 */
/**
 * @param {TreeNode} root1
 * @param {TreeNode} root2
 * @return {boolean}
 */
var leafSimilar = function(root1, root2) {
  const leafs = function (root) {
    if (!root) return undefined;
    
    if (!root.left && !root.right)
      return [root.val];
    else {
      const a = leafs(root.left);
      const b = leafs(root.right);
      if (a !== undefined && b !== undefined)
        return a.concat(b);
      else if (a !== undefined) return a;
      else if (b !== undefined) return b;
      else return undefined;
    }
  }
  
  return JSON.stringify(leafs(root1)) === JSON.stringify(leafs(root2));
};
