/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isValidBST(TreeNode* root)
 {
     long long prev = LLONG_MIN;
     return BST(root, prev);
 }
 bool BST(TreeNode* root, long long& prev)
 {
     if (root == nullptr)
         return true;
     if (!BST(root->left, prev))
         return false;

     if (root->val <= prev)
         return false;
     prev = root->val;

     return BST(root->right, prev);
 }
};