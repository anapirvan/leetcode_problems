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
    vector<TreeNode*> generateTrees(int n)
{
    return buildTree(1, n);
}
vector<TreeNode*> buildTree(int start, int end)
{
    vector<TreeNode*> res;

    if (start > end)
    {
        res.push_back(NULL);
        return res;
    }

    for (int i = start;i <= end;i++)
    {
        vector<TreeNode*> leftTree = buildTree(start, i - 1);
        vector<TreeNode*> rightTree = buildTree(i + 1, end);

        for(int j=0;j<leftTree.size();j++)
            for (int k = 0;k < rightTree.size();k++)
            {
                TreeNode* root = new TreeNode(i);
                root->left = leftTree[j];
                root->right = rightTree[k];
                res.push_back(root);
            }
    }
    return res;
}
};