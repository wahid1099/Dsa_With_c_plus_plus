void average_level(Node* root){
   if(root==NULL) return ;

   queue<Node*> q;
   q.push(root);

   while(!q.empty()){
    int sum = 0;
    int total = 0;

    queue<Node*> temp;

    while(!q.empty()){
        Node *curr=q.front();
        q.pop();

        sum += curr->data;
        total++;

        if(curr->left != NULL){
            temp.push(curr->left);
        }

        if(curr->right != NULL){
            temp.push(curr->right);
        }
    }

    double avarage=(double) sum / (double) total;
    cout<<fixed<<setprecision(1);
    cout<<avarage<<endl;

    q=temp;
   }
}