class Solution
{
public:
    int maxDepth(TreeNode *root)
    {
        if (root == NULL)
            return 0;
        int baamDik = maxDepth(root->left);
        int daanDik = maxDepth(root->right);
        return max(baamDik, daanDik) + 1;
    }
};