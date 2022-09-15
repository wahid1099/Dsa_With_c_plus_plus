Node* invert_tree(Node* root) {
        
        if(root==NULL)
            return root;
        else
        {
    		
            invertTree(root->left);
           
            invertTree(root->right);
            
            Node* temp=root->left;
            root->left=root->right;
            root->right=temp;
            
            return(root);
            
        }
        
    }