class Solution
{
public:
    TreeNode *searchBST(TreeNode *root, int val)
    {
        return searchVal(root, val);
    }
    TreeNode *searchVal(TreeNode *root, int x)
    {
        if (root == NULL)
            return 0;
        if (root->val == x)
            return root;
        if (x < root->val)
            return searchVal(root->left, x);
        else
            return searchVal(root->right, x);
    }
};