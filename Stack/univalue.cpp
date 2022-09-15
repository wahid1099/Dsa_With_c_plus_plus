// C++ program for the above approach

#include <bits/stdc++.h>
using namespace std;

// Structure of a tree node
struct Node {
 int data;
 Node* left;
 Node* right;
};

// Function to insert a new node
// in a binary tree
Node* newNode(int data)
{
 Node* temp = new Node;
 temp->data = data;
 temp->left = temp->right = NULL;
 return (temp);
}

// Function to check If the tree
// is univalued or not
bool isUnivalTree(Node* root)
{

 // If tree is an empty tree
 if (!root) {
  return true;
 }

 // Store nodes at each level
 // of the tree
 queue<Node*> q;

 // Insert root node
 q.push(root);

 // Stores value of root node
 int rootVal = root->data;

 // Traverse the tree using BFS
 while (!q.empty()) {

  // Stores front element
  // of the queue
  Node* currRoot = q.front();

  // If value of traversed node
  // not equal to value of root node
  if (currRoot->data != rootVal) {
   return false;
  }

  // If left subtree is not NULL
  if (currRoot->left) {

   // Insert left subtree
   q.push(currRoot->left);
  }

  // If right subtree is not NULL
  if (currRoot->right) {

   // Insert right subtree
   q.push(currRoot->right);
  }

  // Remove front element
  // of the queue
  q.pop();
 }

 return true;
}

// Driver Code
int main()
{

 /*
    1
   / \
   1  1
  / \  \
  1 1  1
 */
 Node* root = newNode(1);
 root->left = newNode(1);
 root->right = newNode(1);
 root->left->left = newNode(1);
 root->left->right = newNode(1);
 root->right->right = newNode(1);

 if (isUnivalTree(root) == 1) {

  cout << "YES";
 }
 else {

  cout << "NO";
 }

 return 0;
}
// C++ program for the above approach

#include <bits/stdc++.h>
using namespace std;

// Structure of a tree node
struct Node {
 int data;
 Node* left;
 Node* right;
};

// Function to insert a new node
// in a binary tree
Node* newNode(int data)
{
 Node* temp = new Node;
 temp->data = data;
 temp->left = temp->right = NULL;
 return (temp);
}

// Function to check If the tree
// is univalued or not

bool is_unival(Node* root)
{

 if (!root) {
  return true;
 }

 queue<Node*> q;

 q.push(root);

 int rootVal = root->data;

 while (!q.empty()) {

 
  Node* currRoot = q.front();

  
  if (currRoot->data != rootVal) {
   return false;
  }

  if (currRoot->left) {

   q.push(currRoot->left);
  }

  if (currRoot->right) {

   q.push(currRoot->right);
  }

 
  q.pop();
 }

 return true;
}

// Driver Code
int main()
{

 /*
    1
   / \
   1  1
  / \  \
  1 1  1
 */
 Node* root = newNode(1);
 root->left = newNode(1);
 root->right = newNode(1);
 root->left->left = newNode(1);
 root->left->right = newNode(1);
 root->right->right = newNode(1);

 if (isUnivalTree(root) == 1) {

  cout << "YES";
 }
 else {

  cout << "NO";
 }

 return 0;
}
