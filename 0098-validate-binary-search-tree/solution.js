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
var isValidBST = function(root) {
  if (root.left) {
    if (root.val <= root.left.val || !isValidBST(root.left))
      return false;
    if (root.val <= getMax(root.left)) {
      return false;
    }
  }
    
  if (root.right) {
    if (root.val >= root.right.val || !isValidBST(root.right))
      return false;
    if (root.val >= getMin(root.right)) {
      return false;
    }
  }
  return true;
};

var min = function(a, b, c) {
  let m = function(_a, _b) {
    if (_a && _b) return _a < _b ? _a : _b;
    if (_a) return _a;
    if (_b) return _b;
    return null;
  }
  return m(m(a,b),c);
}

var getMin = function(root) {
  if (!root) return null;
  return min(root.val, getMin(root.left), getMin(root.right));
}

var max = function(a, b, c) {
  let m = function(_a, _b) {
    if (_a && _b) return _a > _b ? _a : _b;
    if (_a) return _a;
    if (_b) return _b;
    return null;
  }
  return m(m(a,b),c);
}

var getMax = function(root) {
  if (!root) return null;
  return max(root.val, getMax(root.left), getMax(root.right));
}


