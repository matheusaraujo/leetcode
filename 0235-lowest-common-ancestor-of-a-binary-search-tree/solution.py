# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:
    def lowestCommonAncestor(self, root: 'TreeNode', p: 'TreeNode', q: 'TreeNode') -> 'TreeNode':
        # def findPath(node: TreeNode, path: List[TreeNode], target: int) -> List[TreeNode]:
        #     if target == node.val:
        #         path.append(node)
        #     elif target < node.val:
        #         path = findPath(node.left, path, target)
        #         path.insert(0, node)
        #     else:
        #         path = findPath(node.right, path, target)
        #         path.insert(0, node)
        #     return path

        # pathP = findPath(root, [], p.val)
        # pathQ = findPath(root, [], q.val)

        # i = 0
        # while i < min(len(pathP), len(pathQ)) and pathP[i] == pathQ[i]:
        #     i += 1

        # return pathP[i-1]

        maxi = max(p.val, q.val)
        mini = min(p.val, q.val)

        while True:
            if root.val > maxi: root = root.left
            elif root.val < mini: root = root.right
            else:
                return root

