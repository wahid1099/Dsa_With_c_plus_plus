// #include<iostream>
#include<bits/stdc++.h>
using namespace std;
//creating class 
class Node{
  public:
  Node *next;
  int value;

  Node(int val){
    value=val;
    next=NULL;
  }

};

//display linked list values

void  display(Node *n){
    while(n != NULL){
        cout<<n->value;
        if(n->next!=NULL){
            cout<<" -> ";
        }
        n=n->next;

    }
    cout<<endl;
}       


//function to insertAtHead

void insertAtHead(Node* &head,int value){
  //creating a new node in heap and assinging value
    Node *newNode=new Node(value);
    //poiting the newnode address to head adress
    newNode->next=head;
    //changing the head value to newnode adresss
    head=newNode;

}

int main()
{
 
Node *head=NULL;
    int n;
    int choice=1;
   
    while(choice==1){
    cout<<"Enter the valule : ";
    cin>>n;
   
     insertAtHead(head,n);
     cout<<"To continue enter 1 for exit enter 0 : ";
     cin>>choice;
     if(choice==0)break;
   
}
 display(head);

 
 
  return 0;
}