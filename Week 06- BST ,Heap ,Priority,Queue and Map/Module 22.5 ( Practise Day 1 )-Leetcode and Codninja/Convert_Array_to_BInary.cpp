
//  * Definition for a binary tree node
//  * struct TreeNode {
//  *     int val;
//  *     TreeNode *left;
//  *     TreeNode *right;
//  *     TreeNode() : val(0), left(NULL), right(NULL) {}
//  *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//  *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
//  * right(right) {}
//  * };

class Solution
{
public:
    TreeNode *sortedArrayToBST(vector<int> &a)
    {
        return sortedArrayToBSR(a, 0, a.size() - 1);
    }

    TreeNode *sortedArrayToBSR(vector<int> &a, int l, int r)
    {
        if (l > r)
            return NULL;
        int mid = (l + r) / 2;
        TreeNode *root = new TreeNode(a[mid]);

        root->left = sortedArrayToBSR(a, l, mid - 1);
        root->right = sortedArrayToBSR(a, mid + 1, r);
        return root;
    }
};
