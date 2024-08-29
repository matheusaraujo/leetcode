/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    public StringBuilder solve(TreeNode n, StringBuilder s) {
        if (n == null) return s;

        s.append((char)(n.val + 'a'));
        
        if (n.left == null && n.right == null)
            return s.reverse();

        StringBuilder left = n.left != null ? solve(n.left, new StringBuilder(s)) : null;
        StringBuilder right = n.right != null ? solve(n.right, new StringBuilder(s)) : null;

        if (left != null && right != null)
            return left.toString().compareTo(right.toString()) < 0 ? left : right;
        else if (left == null)
            return right;
        else
            return left;
    }
    public String smallestFromLeaf(TreeNode root) {
        return solve(root, new StringBuilder()).toString();
    }
}
