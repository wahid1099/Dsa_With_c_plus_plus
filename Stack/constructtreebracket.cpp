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

      void solution(TreeNode * root,string &s){
        if(root == NULL) return;
        if(root->left == NULL && root->right == NULL) {
            s+=to_string(root->val);
            return;
        }
        s+=to_string(root->val);
        s+='(';
        solution(root->left,s);
        s+=')';
        if(root->right != NULL){
            s+='(';
            solution(root->right,s);
            s+=')';
        }
       
      }
    string tree2str(TreeNode* root) {
        
        string s="";
        solution(root,s);
        return s;
    }
};