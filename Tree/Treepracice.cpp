// #include<iostream>
#include<bits/stdc++.h>
using namespace std;

class treeNode
{
public:
    int data;
    treeNode* leftChild;
    treeNode* rightChild;
    treeNode(int data)
    {
        this->data = data;
        leftChild = NULL;
        rightChild = NULL;
    }
};


// function declaration
void printTree(treeNode* root,int level);
void spacePrint(int level);

// preorder
void printTree(treeNode* root,int level)
{
    if(root == NULL) //when the tree is empty
    {
        return;
    }
    if(root->leftChild == NULL && root->rightChild == NULL) // case 1
    {
        cout<<root->data<<endl;
        return;
    }
    else // case 2
    {
        cout<<endl;
        spacePrint(level);
        cout<<"Root: "<<root->data<<endl;
    }
    if(root->leftChild != NULL)
    {
        spacePrint(level);
        cout<<"Left: ";
        printTree(root->leftChild,level+1);
    }


    if(root->rightChild != NULL )
    {
        spacePrint(level);
        cout<<"Right: ";
        printTree(root->rightChild,level+1);
    }



}

void spacePrint(int level)
{
    for(int i=0; i<level; i++)
    {
        cout<<"   ";
    }

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
                s.push(chkNode->rightChild);
            }
        }else{
            if(!s.empty()){
                s.push(NULL);
            }
        }

    }

}

int main()
{
 
  int n;
    cin>>n;
    treeNode* allNodes[n];
    for(int i=0; i<n; i++)
    {
        allNodes[i] = new treeNode(-1);
    }
    for(int i=0; i<n; i++)
    {
        int value,left,right;
        cin>>value>>left>>right;
        allNodes[i]->data = value;
        if(left > n-1 || right > n-1)
        {
            cout<<"Invalid Index"<<endl;
            break;
        }
        if(left != -1)
        {
            allNodes[i]->leftChild = allNodes[left];
        }
        if(right != -1)
        {
            allNodes[i]->rightChild = allNodes[right];
        }
    }
  level_order_reverse(allNodes[0]);
  printTree(allNodes[0],0);
 
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