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
      bool ans=true;
      int depth(TreeNode* root){
        if(root ==NULL) return 0;
        int x=depth(root->left);
        int y=depth(root->right);
        if(abs(x-y) >1) ans=false;
        return max(x,y)+1;
      }
    bool isBalanced(TreeNode* root) {
        int h= depth(root);
        return ans;
        
    }
};