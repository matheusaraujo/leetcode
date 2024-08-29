/**
 * Definition for a binary tree n.
 * function Treen(val, left, right) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.left = (left===undefined ? null : left)
 *     this.right = (right===undefined ? null : right)
 * }
 */
/**
 * @param {Treen} root
 * @param {number} targetSum
 * @return {number}
 */
var pathSum = function(root, targetSum) {
  
  const solve = (n, t, c) => {
    if (!n) return 0;

    let s = n.val, ans = s === t ? 1 : 0;
    for(let i = c.length - 1; i > -1; i--) {
      s += c[i];
      if (s === t) ans++;
    }
    
    c.push(n.val);
    ans += solve(n.left, t, c) + solve(n.right, t, c);
    c.pop();
    
    return ans;
  }
  return solve(root, targetSum, []);
};
