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
    int valid(TreeNode* root,bool &val)
    {
        if(!root)   return 0;
        int l=valid(root->left,val);
        int r=valid(root->right,val);
        if(abs(l-r)>1)  val=0;
        return 1+max(l,r);

    }
public:
    bool isBalanced(TreeNode* root) {
        bool val=1;
        valid(root,val);
        return val;

        
    }
};
