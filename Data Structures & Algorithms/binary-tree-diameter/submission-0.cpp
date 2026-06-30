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
    int dia;
    int dfs(TreeNode* root)
    {
        if (!root) return 0;

        int leftheight = dfs(root->left);
        int rightheight = dfs(root->right);
        
       
        dia = max(dia, leftheight + rightheight);
        
        
        return max(leftheight, rightheight) + 1;
    }

public:
    int diameterOfBinaryTree(TreeNode* root) {
        dia = 0;
        dfs(root);
        return dia;
    }
};
