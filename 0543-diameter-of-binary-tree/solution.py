# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def diameterOfBinaryTree(self, root: Optional[TreeNode]) -> int:
        self.result = 0

        def dfs(node: Optional[TreeNode]):
            if not node: return 0
            left, right = dfs(node.left), dfs(node.right)
            self.result = max(self.result, left + right)

            return max(left, right) + 1

        dfs(root)

        return self.result

