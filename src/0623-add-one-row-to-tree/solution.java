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
    private TreeNode solve(TreeNode root, int val, int depth, int currDepth) {
        if (root == null) return null;

        root.left = currDepth + 1 == depth ? 
            new TreeNode(val, root.left, null) : 
            solve(root.left, val, depth, currDepth + 1);
        
        root.right = currDepth + 1 == depth ? 
            new TreeNode(val, null, root.right) : 
            solve(root.right, val, depth, currDepth + 1);

        return root;
    }
    public TreeNode addOneRow(TreeNode root, int val, int depth) {
        if (depth == 1)
            return new TreeNode(val, root, null);
        return solve(root, val, depth, 1);
    }
}
