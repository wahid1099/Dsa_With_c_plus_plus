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
void showpq(priority_queue<int> gq)
{
    priority_queue<int> g = gq;
    while (!g.empty()) {
        cout << '\t' << g.top();
        g.pop();
    }
    cout << '\n';
}

int main()
{
 
  int a;
  cin>>a;
  
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

    //   cout<<"Value are"<<endl;
    // showpq(maxbst);

    int qtn;
    cin>>qtn;
    for(int i=0; i<qtn; i++){
      int operation,value;
      cin>>operation;
      if(operation==1){
        cin>> value;
        maxbst.push(value);

      }else if(operation==2){
        cout<<maxbst.top()<<endl;
        maxbst.pop();
      }
    }

 
 
  return 0;
}