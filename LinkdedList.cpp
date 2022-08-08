// #include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int value;
    Node *Next;
    //constructor creates a new node
    Node(int val){
        value=val;
        Next=NULL;
    }
    

};

void display(Node *n){
    
    while(n!=NULL){
        cout << n->value;
        if(n->Next != NULL){
           cout<<" -> ";
        }
       
        n=n->Next;
    }

    cout << endl;

}
void append(int roll)
{
	if(root==NULL) //If the list is empty
	{
		root=new node();
		root->roll=roll;
		root->next=NULL;
	}
	else
	{
		node *current_node=root; //make a copy of root node
		while(current_node->next!=NULL) //Find the last node
		{
			current_node=current_node->next; //go to next address
		}
		node *newnode = new node(); //create a new node
		newnode->roll=roll;
		newnode->next=NULL;
		
		current_node->next=newnode; //link the last node with new node
	}
}


 void insertAtTail(Node* &head,int val ){
    

 }
int main()
{
    Node *head=NULL;
    insertAtTail(head,1);
    // Node *second=new Node();
    // Node *third=new Node();
    // Node *fourth=new Node();

//assing value

    head->value=1;
    second->value=5;
    third->value=8;
    fourth->value=9;


   //poinitng *next to second adress
    head->Next=second;
    second->Next=third;
    third->Next=fourth;
    fourth->Next=NULL;

 
       display(head);
 
 
  return 0;
}