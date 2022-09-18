
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

void inOrder(treeNode* root,string &chk);
treeNode* insertionBST(treeNode* root, int value);


// inorder
void inOrder(treeNode* root,string &chk)
{
    if(root== NULL)
    {
        return;
    }
    inOrder(root->leftChild,chk);
    chk += to_string(root->data);
    chk += " ";
    inOrder(root->rightChild,chk);

}



treeNode* insertionBST(treeNode* root, int value){
    treeNode* newNode = new treeNode(value);
    if(root == NULL){
        root = newNode;
        return root;
    }
    // value < root->data
    if(value <  root->data){
        root->leftChild =  insertionBST(root->leftChild,value);
    }
    // value > root->data
    else if(value > root->data){
        root->rightChild = insertionBST(root->rightChild,value);
    }
    return root;
}

treeNode* searchBST(treeNode* root,int value){
    // case 1:
    if(root== NULL) return NULL;
    if(root->data == value) {
            cout<<root->data;
            return root;
    }
    else if(root->data < value){
        cout<<root->data<<"->";
        searchBST(root->rightChild,value);
    }
    else{
        cout<<root->data<<"->";
        searchBST(root->leftChild,value);
    }

}

treeNode* inOrderSuccessor(treeNode* root){
    treeNode* current = root;
   // if(current == NULL) return NULL;
    while(current->leftChild != NULL ){
        current = current->leftChild;
    }
    return current;
}

treeNode* deletionBST(treeNode* root,int value){
    if(value < root->data){
       root->leftChild =  deletionBST(root->leftChild,value);
    }
    else if(value > root->data){
       root->rightChild = deletionBST(root->rightChild,value);
    }
    else{
        //implementation 3 case
        // 1. leaf node
        if(root->leftChild == NULL){
            // case 1 and case 2
            treeNode *temp = root->rightChild;
            free(root);
            return temp;
        }
        else if(root->rightChild == NULL){
            // case 2
            treeNode *temp = root->leftChild;
            free(root);
            return temp;
        }
        else{
            // case 3
            treeNode* temp = inOrderSuccessor(root->rightChild);
            root->data = temp->data;
            root->rightChild = deletionBST(root->rightChild,temp->data);
        }

    }
     return root;
}
int main()
{
    int n;
    cin>>n;
    treeNode *root = NULL;
    for(int i=0;i<n;i++){
        int value;
        cin>>value;
        root = insertionBST(root,value);
    }
    string traversal;
    inOrder(root,traversal);
    cout<<traversal<<endl;

    int key;
    cin>>key;
    /*
    if(searchBST(root,key) == NULL){
        cout<<endl<<"Value doesn't exits in BST"<<endl;
    }
    else{
        cout<<endl<<"Value exit in the BST"<<endl;
    }
    */

    root = deletionBST(root,key);
    string after;
    inOrder(root,after);
    cout<<after<<endl;
    return 0;
}

/*
input:
9
11 5 9 43 34 1 2 7 25

11
11 5 9 43 34 1 2 7 8 6 21
*/