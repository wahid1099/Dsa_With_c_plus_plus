// #include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int val;
    Node *left;
    Node *right;
    
    Node(int val){
        this->val = val;
        left=NULL;
        right=NULL;
    }
};

void BFS(Node *root,int arr[],int count)
{
	queue<Node*> q;
	 count=0;
	q.push(root);
	q.push(NULL);	//	To print each level on new line
		
	while(!q.empty())
	{
		Node *f=q.front();
       
		if(f==NULL)
		{
			cout<<"\n";
			q.pop();
			
			if(!q.empty())
			q.push(NULL);
		}
		
		else
		{
            
			cout<<f->val<<" ";
            arr[count]=f->val;
			q.pop();
            count++;
		
		if(f->left)
			{
				q.push(f->left);
			}
		
		if(f->right)
			{
				q.push(f->right);
			}
		
		}
		
	}
}



void print(Node *root){
    if(root==NULL) return;
    print(root->left);
    cout<<root->val<<endl;
     print(root->right); 
}

void showpq(priority_queue<int> gq)
{
    priority_queue<int> g = gq;
    while (!g.empty()) {
        cout << '\t' << g.top();
        g.pop();
    }
    cout << '\n';
}

int maxValue( Node* node)
{  
    /* loop down to find the rightmost leaf */
     Node* current = node;
    while (current->right != NULL)
        current = current->right;
     
    return (current->val);
}

Node *minvaluenode(Node *node){
    Node *current = node;
    while(current && current->left != NULL){
        current = current->left;
    }
    return current;
}


Node *deleteNode(Node *root,int key){
         //base case: delete
         if(root == NULL){
            return root;

         }
    // If the key to be deleted is 
    // smaller than the root's
    // key, then it lies in left subtree

         if(key<root->val){
            root->left=deleteNode(root->left,key);
         }
          // If the key to be deleted is
    // greater than the root's
    // key, then it lies in right subtree

    else if(key > root->val){
        root->right=deleteNode(root->right,key);
    }

    else{
        if(root->left== NULL && root->right== NULL){
            return NULL;
        }
        else if(root->left==NULL){
            Node *temp=root->right;
            free(temp);
            return temp;
        }
         else if(root->right==NULL){
            Node *temp=root->left;
            free(temp);
            return temp;
        }
        Node *temp=minvaluenode(root->right);
        root->val=temp->val;
        root->right=deleteNode(root->right,temp->val);
    }
    return root;
         
         }

int main()
{
 
  int a;
  cin>>a;
  int num[101];
   Node *root=new Node(a);
     priority_queue<int> maxbst;


    queue<Node *> q;
    q.push(root);

    while(!q.empty()){
        Node *presentRoot = q.front();
       maxbst.push(presentRoot->val);
        q.pop();
        int x,y;
        cin >>x>>y;
        Node *n1=NULL;
        Node *n2=NULL;
        if(x!=-1) n1=new Node(x);
        if(y!=-1) n2=new Node(y);

        presentRoot->left=n1; 
        presentRoot->right=n2;

        if(n1!=NULL) q.push(n1);
        if(n2!=NULL) q.push(n2);
    }

      
    BFS(root,num,count);
//    int max=maxValue(root);
//    cout<<"Maximum value is "<<max<<endl;
//    root=deleteNode(root,max);
//    cout<<"After deletion"<<endl;
//    BFS(root);

    // int qn;
    // cin>>qn;
    // for(int i=0;i<qn;i++){
    //     int operation,value;
    //     cin>>operation;
    //     if(operation==1){
    //         cin>>value;
            

    //     }
    //     else if(operation==2){
    

    //     }
    // }
// while(num)

//     cout<<"Value of array is "<<endl;
//    for(int i=0; i<=count; i++){
//     cout<<num[i]<<" ";
//    }
  

  return 0;
}