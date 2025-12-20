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
class Solution
{
public:
    TreeNode* prev = nullptr;
    TreeNode* first = nullptr;
    TreeNode* second = nullptr;
    void recoverTree(TreeNode* root)
    {
        helper(root);
        swap(first->val, second->val);
    }
    void helper(TreeNode* node)
    {
        if (node == nullptr)
            return;

        helper(node->left);

        if (prev != nullptr && prev->val > node->val)
        {
            if (first == nullptr)
                first = prev;
            second = node;
        }

        prev = node;

        helper(node->right);
    }
    
};