class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> result;
        stack<TreeNode*> s;
        TreeNode* temp = root;

        // Traverse the tree in-order using an explicit stack
        while (temp != nullptr || !s.empty()) {
            // Move to the leftmost node of the current subtree
            while (temp != nullptr) {
                s.push(temp);    // Push the current node onto the stack
                temp = temp->left;   // Move to the left child
            }

            // Process the current node
            temp = s.top();
            s.pop();
            result.push_back(temp->val);

            // Move to the right subtree
            temp = temp->right;
        }

        return result;
    }
};
