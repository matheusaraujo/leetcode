# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:
    def lowestCommonAncestor(self, root: 'TreeNode', p: 'TreeNode', q: 'TreeNode') -> 'TreeNode':
        if root in (None, p, q): return root
        left = self.lowestCommonAncestor(root.left, p, q)
        right = self.lowestCommonAncestor(root.right, p, q)
        return root if (left and right) else left or right
        # def findPath(node: TreeNode, target: TreeNode, stack: []) -> bool:
        #     if node == None: return False
        #     if node.val == target.val:
        #         stack.append(node)
        #         return True
        #     elif findPath(node.left, target, stack):
        #         stack.append(node)
        #         return True
        #     elif findPath(node.right, target, stack):
        #         stack.append(node)
        #         return True

        # sp, sq = [], []
        # findPath(root, p, sp)
        # findPath(root, q, sq)
        
        # for i in range(len(sp)):
        #     for j in range(len(sq)):
        #         if sp[i] == sq[j]:
        #             return sp[i]

