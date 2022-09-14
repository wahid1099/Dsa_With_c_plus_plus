// #include<iostream>
#include<bits/stdc++.h>
using namespace std;

class treeNode{
    public:
    int data;
    treeNode *leftChild;
    treeNode *rightChild;

    treeNode(int value){
        data=value;
        leftChild=NULL;
        rightChild=NULL;

    }
};

void spacePrint(int level);

void printTree(treeNode *root,int level);

 void inOrder(treeNode *root,string chk);

void inOrder(treeNode *root,string chk){
    if(root==NULL) return;
    inOrder(root->leftChild,chk);
    chk+=to_string(root->data);
    inOrder(root->rightChild,chk);
}

void preOrderTraversal(treeNode *root,string chk){
    if(root==NULL) return;
    chk+=root->data;
    preOrderTraversal(root->leftChild,chk);
    preOrderTraversal(root->rightChild,chk);
}

void postorder(treeNode *root,string chk){
    if(root==NULL) return;

    postorder(root->leftChild,chk);
    postorder(root->rightChild,chk);
    chk+=to_string(root->data);
}


void printTree(treeNode *root,int level){

    if(root==NULL){
        return;
    }

    if(root->leftChild==NULL && root->rightChild==NULL){
        cout<<root->data<<endl;
        return;
    }
    else{
        cout<<endl;
      //  spacePrint(level);
        cout<<"Root: "<<root->data<<endl;

    }
    if(root->leftChild != NULL){
      //  spacePrint(level);
        cout<<"Left: ";
        printTree(root->leftChild,level+1);
    }
    if(root->rightChild != NULL){
        //spacePrint(level);
        cout<<"Right: ";
        printTree(root->rightChild,level+1);

    }

}

void spacePrint(int level){
    for(int i=0;i<level;i++){
        cout<<"   ";
    }
}

int levelOrderTraversal(treeNode *root, string chk,int k){
    if(root==NULL) return -1;
    
    int level=0;

    queue <treeNode*> q;
    q.push(root);
    q.push(NULL);
    int max=INT_MIN;

    while(!q.empty()){
        treeNode *chkNode=q.front();
        q.pop();
        if(chkNode!=NULL){
            if(level==k){
                if(max<chkNode->data){
                    max=chkNode->data;

                }
            }

            chk+=to_string(chkNode->data);
            cout<<chkNode->data<<endl;
            if(chkNode->leftChild!=NULL){
                q.push(chkNode->leftChild);
            }
            if(chkNode->rightChild!=NULL){
                q.push(chkNode->rightChild);
            }
        }
        else{
            if(!q.empty()){
                q.push(NULL);
                level++;
            }
        }
    }
    return max;
}


void level_order_reverse(treeNode *root){
    if(root==NULL){
        return;
    }

    stack<treeNode *> s;
    s.push(root);
    s.push(NULL);

    while(!s.empty()){
        treeNode *chkNode=s.top();
        s.pop();
        if(chkNode!=NULL){
            if(chkNode->leftChild != NULL){
                s.push(chkNode->leftChild);
            }
            if(chkNode->rightChild != NULL){
                s.push(chkNode->right);
            }
        }else{
            if(!s.empty()){
                s.push(NULL);
            }
        }

    }

}

int  searchINorder(int inorder[],int current,int start,int end){
    for(int i=start; i<=end; i++){
        if(inorder[i]==current){
            return i;
        }

    }
    return -1;
}
treeNode *buildtreePreIn(int preorder[],int inorder[],int start,int end){
  static  int id=0;
    int current=preorder[id];
    id++;
    treeNode *newnode=new treeNode(current);
    if(start==end){
        return newnode;
    }
    
    int pos=searchINorder(inorder,current,start,end);

    newnode->leftChild=buildtreePreIn(preorder,inorder,start,pos-1);
    newnode->rightChild=buildtreePreIn(preorder,inorder,pos+1,end);


   return newnode; 
}

void printLeaves(treeNode *root){
    if(root==NULL) return;


}

void printLeftNonLeavesLeft(treeNode *root){
    if(root==NULL) return;
    if(root->leftChild != NULL){
        cout<<root->data<<" ";
    }


}

void printfRightNonLeaves(treeNode *root){

}


void boundaryTraversal(treeNode *root){
    if(root==NULL) return;
    cout<<root->data<<" ";

    //Lb non leaves s
   printLeftNonLeavesLeft(root->leftChild);
   //lb leaves
   printLeaves(root->rightChild);

   // rb leanves
   printLeaves(root->rightChild);

  /////////// ///////////////
  printfRightNonLeaves(root->rightChild);


}
int main()
{
 int n;
cin>>n;

int preorder[n],inorder[n];
for(int i=0; i<n; i++){
    cin>>preorder[i];
}
for(int i=0; i<n; i++){
    cin>>inorder[i];
}

treeNode *root=buildtreePreIn(preorder,inorder,0,n-1);
string chekp;
preOrderTraversal(root,chekp);
cout<<chekp<<endl<<endl;



  return 0;
}


// 9
// 0 1 2
// 1 3 4
// 2 5 6
// 3 - 1 -1
// 4 -1 -1
// 5 7 8
// 6 -1 -1
// 7 -1 -1
// 8 -1 -1
