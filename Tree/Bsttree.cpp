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
    chk+=(to_string(root->data)+" ");
    inOrder(root->rightChild,chk);
}

void preOrder(treeNode *root,string chk){
    if(root==NULL) return;
    chk+=root->data;
    preOrder(root->leftChild,chk);
    preOrder(root->rightChild,chk);
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

treeNode *intertionBST(treeNode *root,int value){
    treeNode *newNode=new treeNode(value);
    if(root==NULL){
        root=newNode;
        return root;
    }

    //value < root-> data->
    if(value < root->data ){
        root->leftChild=intertionBST(root->leftChild,value);

    }

    // value > root-> data->
    else if(value>root->data){
        root->rightChild=intertionBST(root->rightChild,value);

    }
    return root;

}

int main()
{
 int n;
cin>>n;
treeNode *root=NULL;
for(int i=0; i <n; i++){
    int value;
    cin>>value;
    root=intertionBST(root,value);
}
 string traversalString="";
 traversalString=inOrder(root,traversalString);
 cout<<traversalString<<endl;
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
