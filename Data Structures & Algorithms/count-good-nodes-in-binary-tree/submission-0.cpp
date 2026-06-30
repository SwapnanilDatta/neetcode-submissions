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
    void search(TreeNode *root,int &count,int maxvalue)
    {
        if(root==nullptr)   return;
        
        if (root->val>=maxvalue)
        {
            count++;
            maxvalue=root->val;
        }
        
        search(root->left,count,maxvalue);
        search(root->right,count,maxvalue);

    }
public:
    int goodNodes(TreeNode* root) {
        int count=0;
        
        search(root,count,root->val);
        return count;
        
    }
};
