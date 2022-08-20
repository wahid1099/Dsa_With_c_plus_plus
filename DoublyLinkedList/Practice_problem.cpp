// #include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    Node *Next;
    int value;
    Node(int val){
        // if(val %2==0 ){
        //     value = -1;
        // }else{
        //     value = val;
        // }
        value = val;
        Next=NULL;
    }
};

void display(Node *n){//1 2 3 4 5 6 7 8 9
    
    while(n!=NULL){
        cout << n->value;
        if(n->Next != NULL){
           cout<<" -> ";
        }
       
        n=n->Next;
    }

    cout << endl;

}

//insetion at tail
void insertAtTail(Node* &head,int val )

{
    Node *newNode = new Node(val);
	if(head==NULL) //If the list is empty
	{
		head=newNode;
        return;
	}

    Node *temp=head;
    while(temp->Next != NULL){
        temp=temp->Next;
    }
    temp->Next=newNode;
    
	
}


////////////////////////////////////////////////////////////////
  int findMid(Node* &head){
    Node *slow=head;
    Node *fast=head;
    while(fast->Next != NULL && fast->Next->Next != NULL){
        temp=temp->Next;
    }

    int mid;
    mid=temp->value;
    return mid;
    
}

int main()
{

    Node *head=NULL;
    
   int choice,val;
   cout<<"Enter choice: ";
   cin >> choice;
   while(choice !=0){

    switch(choice){
        case 1:
        cout<<"Enter the value";
        cin>>val;
        insertAtTail(head,val);
        break;
       case 2:
       display(head);
       break;
    
        default:
        break;

        
        
    }
    cout<<"Next choice: ";
    cin>>choice;

   }
 
cout<<endl<<"Linked List: ";
display(head);
 
 
  return 0;
}