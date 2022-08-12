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


 void insertAtHead(Node* &head,int val ){
    Node *newnode = new Node(val);
    newnode->Next=head;
    head=newnode;

 }

 void  reversedListPrint(Node *head)
    {
        Node *current=head;
        Node *prev=NULL;
       while (current!=NULL){
        Node *temp=current->Next;
        current->Next=prev;
        prev=current;
        current=temp;
       }
       head= prev;
    }
 

int main()
{
    Node *head=NULL;
   int n;
cout<<"Choice 1:Insertion at head "<<endl<<"Choice 2 insertion at taile"<<endl;
int choice=2;
while(choice==1 || choice==2){
    cout<<"Enter the valule : ";
    cin>>n;
    if(choice ==1)insertAtHead(head,n);
    else if(choice ==2)insertAtTail(head,n);
    cout<<"Next Choice:";
    cin>>choice;
}
display(head);
// reverse(&head);
reverse(head);
cout<<"After reversing";
display(head);

    return 0; 
}
 
 
