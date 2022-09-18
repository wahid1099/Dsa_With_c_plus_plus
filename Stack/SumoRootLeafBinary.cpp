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
int convert(string s){
    int bi=0,c=1;
    for(int i=s.size()-1;i>=0;i--){
        bi+=(s[i]-'0')*c;
        c*=2;
    }
    return bi;
}
    int ans=0;
    void solution (TreeNode *root,string s){
        if(root==NULL) return;
        if(root->left==NULL && root->right==NULL){
            int val=convert(s+to_string(root->val));
            ans+=val;
            return;
        } 

        solution(root->left,s+to_string(root->val));
        solution(root->right,s+to_string(root->val));

    }

    int sumRootToLeaf(TreeNode* root) {
        solution(root,"");
        return ans;
        
    }
};