// #include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int value;
    Node *next;
    Node(int val){
        value=val;
        next=NULL;
    
    }
};
//insertin value in tail
void insertAtTail(Node* &head,int value){
  //If the list is empty
    Node *newNode=new Node(value);
    if(head==NULL){
        head=newNode;
        return;
    }
    Node *temp=head;
    while(temp->next != NULL){
        temp=temp->next;
    }
    temp->next=newNode;


}
//to display the value of linked list
void display(Node *n){

    while(n != NULL){
        cout<<n->value;  
        if(n->next != NULL){
            cout<<" -> ";
        }
        n=n->next;
        
          }
           cout << endl;

}

int main()
{
 
    Node *head=NULL;
    int n;
    int choice=1;
   
    while(choice==1){
    cout<<"Enter the valule : ";
    cin>>n;
   
     insertAtTail(head,n);
     cout<<"To continue enter 1 for exit enter 0 : ";
     cin>>choice;
     if(choice==0)break;
   
}
 display(head);

 
 
  return 0;
}