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
    vector<vector<int>> levelOrder(TreeNode* root) {
        if (!root) return {}; // Handle null root case

        queue<TreeNode*> q; // Queue for BFS
        q.push(root);

        vector<vector<int>> ans; // Result to store level-wise traversal

        while (!q.empty()) {
            int n = q.size(); // Number of nodes at the current level
            vector<int> current; // Vector to store values of the current level

            while (n--) {
                TreeNode* temp = q.front(); // Get the front node
                q.pop();
                current.push_back(temp->val); // Add the node value to current level

                // Add children to the queue
                if (temp->left) q.push(temp->left);
                if (temp->right) q.push(temp->right);
            }

            ans.push_back(current); // Add the current level to the result
        }

        return ans;
    }
};
