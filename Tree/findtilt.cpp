int answer = 0;

int solve(Node *root,int sum){
     
    if (root==NULL) return 0;
   int left=solve(root->left,sum);
   int right=solve(root->right,sum);
   total+=abs(left-right);
   return left+right+root->value; 
    

}



int findTilt(Node* root){

    solve(root,0);
    return total;     
}