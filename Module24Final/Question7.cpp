// #include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Node{
     public:
    Node *next;
    int value;

    Node(int val){
        value=val;
        next=NULL;
    }
};
void display(Node *n){

    while(n != NULL){
        cout<<n->value;
        if(n->next!=NULL){
            cout<<" -> ";
        }
        n=n->next;
    }
}

void insertAttail(Node *&head,int val){
    Node *newNode=new Node(val);

    if (head==NULL){
        head=newNode;
        return;
        }
        Node *temp=head;
        while(temp->next != NULL){
            temp=temp->next;
        }
        temp->next=newNode;
}

Node *reverseKthNode(Node *&head,int k){
    Node *prevptr=NULL;
    Node *currentptr=head;
    Node *nextptr;
    int count=0;
    while(currentptr!=NULL && count<k){
        nextptr=currentptr->next;
        currentptr->next=prevptr;
        prevptr=currentptr;
        currentptr=nextptr;
         count++;
    }

    if(nextptr!=NULL){
        head->next=reverseKthNode(nextptr,k);
    }
    return prevptr;

}
int main()
{
 int n,k,value;
 Node *head=NULL;
 cout<<"How many elements do you want to add :";
cin>>n;
cout<<endl;
cout<<"Enter linked list elements: ";

 for(int i=0;i< n; i++){
    cin >>value;
    insertAttail(head,value);
 }
 cout<<"Linked list before reversing: ";
 display(head);
 cout<<endl;
cout<<"Enter the kth position to reverse: ";
cin>>k;
 cout<<endl;

Node *newhead=reverseKthNode(head,k);
  cout<<"Linked list after reversing: ";
 display(newhead);



  return 0;
}
