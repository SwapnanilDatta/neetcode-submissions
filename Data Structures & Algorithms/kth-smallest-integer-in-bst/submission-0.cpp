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
private:
    int inorder(TreeNode* root, int& k) {
        if (!root) return -1; // Base case: return an invalid value for null nodes

        // Traverse the left subtree
        int left=inorder(root->left, k);
        if (k==0)   return left;
         // If the k-th element was found in the left subtree, return it

        // Process the current node
        k--; // Decrement k as we visit this node
        if (k == 0) return root->val; // If k becomes 0, return the current node's value

        // Traverse the right subtree
        return inorder(root->right, k);
    }

public:
    int kthSmallest(TreeNode* root, int k) {
        return inorder(root, k); // Start the in-order traversal
    }
};

