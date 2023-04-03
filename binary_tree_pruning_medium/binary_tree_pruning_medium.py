# Definition for a binary tree node.
class TreeNode:
   def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right
        
from typing import Optional 
class Solution:
    def pruneTree(self, root: Optional[TreeNode]) -> Optional[TreeNode]:
        """The Idea is to to drop responsibility to the childs and then ask 
        - if both of my chidls are unneccesary tso I can delete my self (or my child are empty if I am a lead) """ 
        if not root : 
            return None 
        root.left = self.pruneTree(root.left)
        root.right = self.pruneTree(root.right)
        if not root.left and not root.right : 
            return root if root.val == 1 else None 
        return root 
        