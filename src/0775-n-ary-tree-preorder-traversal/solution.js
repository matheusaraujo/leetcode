/**
 * // Definition for a Node.
 * function Node(val, children) {
 *    this.val = val;
 *    this.children = children;
 * };
 */

/**
 * @param {Node|null} root
 * @return {number[]}
 */
var preorder = function(root) {
    let ans = [];
    if (!root) return [];
    ans.push(root.val);
    for(let i = 0; i < root.children.length; i++)
        ans = ans.concat(preorder(root.children[i]));
    return ans;
};
