void zigzag_order(Node* root) {
  if(root==NULL) return;

  stack<Node*> currentlevel;
  stack<Node*>nextlevel;
  bool leftToright=true;
  currentlevel.push(root);
  while(!currentlevel.empty()){
    Node *temp=currentlevel.top();
    currentlevel.pop();
    
    if(temp!=NULL){
        cout<<temp->data<< " ";
         if(leftToRight){
        if(temp->left != NULL){
            nextlevel.push(temp->left);
        }

        if(temp->right != NULL){
            nextlevel.push(temp->right);
        }
    }

    else{
        if(temp->right != NULL){ 
            nextlevel.push(temp->right);
        }
        if(temp->left!=NULL){
            nextlevel.push(temp->left);
        }
    }

    }

      if (currentlevel.empty()) {
            lefttoright = !lefttoright;
            swap(currentlevel, nextlevel);
        }

   
  }
}