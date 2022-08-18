// #include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int value;
    Node *next;
    Node(int val){
        value =val;
        next=NULL;
        }
};

void display(Node *head){
    Node *temp = head;
    if(head==NULL){
        cout<<"The linked list is empty";
        return;
    }


  do{
     cout<<temp->value;
         if(temp->next != head){
            cout<<" -> ";
         }
         temp=temp->next;
        
  }while(temp!=head);
    
}

void insertAttail(Node *&head,int val){
    Node *newNode= new Node(val);
    if(head==NULL){
        head=newNode;
        newNode->next=head;
        return;
    }
    Node *temp=head;
    while(temp->next != head){
        temp=temp->next;
        }
        newNode->next=head;//newnode->next=temp->next;
        temp->next = newNode;
}


void insertionAthead(Node *head,int val){
    //s1 creating new node
    Node *newNode= new Node(val);
    if(head==NULL){
        head=newNode;
        newNode->next=head;
        return;
    }
    //s2 update the newNode->next with head value
    newNode->next=head;
    //s3:update the tail with new node value
    Node *temp=head;
    while(temp->next != head){
        temp=temp->next;
        }
        temp->next=newNode;
        //s4: update head
        head=newNode;
}


  int CountSize(Node* head){
    int count=0;
    Node *current=head;

    do{
      count++;
         current=current->next;
    } while(current !=head);
  
    return count;
   }


   void deleteAthead(Node *&head){

    //s1 d
    Node *temp=head;
    if(temp!=NULL){
        Node *delNode=temp;
        while(temp->next !=head){
            temp=temp->next;
        }
        temp->next=delNode->next;
        head=delNode->next;
        delete(delNode);
    }

   }
int main()
{
    Node *head = NULL;
 int value,choice,size;
cout << "----------------------------------/"<<endl;
cout << "Cicular Linked List operation" << endl;
cout << "----------------------------------/"<<endl;


 cout<<"Case 1:Insertion At head "<<endl
     <<"Case 2:Insertion At tail "<<endl
     <<"Case 3:Count the size of the Circular list"<<endl
     <<"Case 4:Delete The head Node"<<endl
     <<"Case 5:Display all values"<<endl
     <<"Case 0:Exit from operation"<<endl;

     cout<<"Enter your choice : ";  
     cin>>choice;

     while (choice!=0){
        switch (choice){
            case 1:
            cout << "Enter the value of head Node: ";
            cin>>value;
            insertionAthead(head,value);  
            break; 

            case 2:
            cout << "Enter the value of tail Node: ";
            cin>>value;
            insertAttail(head,value); 
            break; 

            case 3:
            size=CountSize(head);
            cout<<"The size of the list is "<<size<<endl;
            break; 

            case 4:
            deleteAthead(head);
            cout<<"The head of the list deleted successfully.!"<<endl;
            break;

            case 5:
            display(head);
            cout<<endl;
            
        }

        cout<<"Next choice : ";
        cin>>choice;

     }
     display(head);
 
 
  return 0;
}