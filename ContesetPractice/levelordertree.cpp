#include<bits/stdc++.h>

using namespace std;

class node
{
    public:
    int data;
    node *left,*right;

    node(int d)
    {
        data=d;
        left=right=NULL;
    }
};

// Breadth First Search (BFS)
void BFS(node *root)
{
	queue<node*> q;
	
	q.push(root);
	q.push(NULL);	//	To print each level on new line
		
	while(!q.empty())
	{
		node *f=q.front();
		if(f==NULL)
		{
			cout<<"\n";
			q.pop();
			
			if(!q.empty())
			q.push(NULL);
		}
		
		else
		{
			cout<<f->data<<" ";
			q.pop();
		
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


node *buildtree()
{
    int count=0;
    int d;
    queue<node*> q;

    cin>>d;
    node *root=new node(d);
    node *cur=root;
    root=cur;

    while(1)
    {
        cin>>d;
        if(d!=-1)
        {
            if(count==0)
            {
                cur->left=new node(d);
                count++;
                q.push(cur->left);
        
            }

            else if(count==1)
            {
                cur->right=new node(d);
                q.push(cur->right);
                
                count=0;
                
                if(q.front())
                cur=q.front();
                
                q.pop();
            }
        } 

        else if(d==-1)
        {
            if(count==0)
            count++;

            else
            {
                count=0;
                if(q.front())
                cur=q.front();

                q.pop();
            }
        }       

        if(q.empty())
        return root;

        
    }

}


    void dfs(node* root, vector<int>freq, int&count)
    {
      if(root==NULL)
      {
          return;
      }
      freq[root->data]++;
      dfs(root->left,freq,count);
      if(root->left== NULL && root->right==NULL)
      {
          int oddCount=0;
          for(auto x:freq)
          {
              if(x%2==1)
              {
               oddCount++;   
              }
          }
          if(oddCount<=1)
          {
              count++;
          }
      }
     dfs(root->right,freq,count);
      
    }
    int pseudoPalindromicPaths (node* root) {
     vector<int>freq(20,0);
     int count=0;
     dfs(root,freq,count);
     return count;
    }

int main()
{

     string texts;
     cin>>texts;
    node *root=buildtree();
    
    BFS(root);

   int val=pseudoPalindromicPaths(root);
   cout<<"Count is "<<val<<endl;
    return 0;
}