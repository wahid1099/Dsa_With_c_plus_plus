// #include<iostream>
#include<bits/stdc++.h>
using namespace std;

class doublyNode{
    public:
    doublyNode *next;
    doublyNode *prev;
    int value;
    doublyNode(int val){
        value=val;
        next=NULL;
        prev=NULL;
    }
};

//////////////////////////
//display
void display(doublyNode *n){
    while(n!=NULL){
        cout<<n->value;
        if(n->next!=NULL){
            cout<<" --> ";
        }
        n=n->next;
    }
}
///////////////////
//counting functions
int countLength(doublyNode *head){
    
    if(head==NULL){
            return -1;
         }
    doublyNode *temp=head;
     int count=0;
    while(temp!=NULL){
        count++;
        temp = temp -> next;
    }

    return count;

    
}
////////////////////////////////////////////////////////////////
//insertion at tail of node
void insertAttail(doublyNode * &head,int val){
    doublyNode *newnode = new doublyNode(val);
    doublyNode *temp = head;

    if (temp == NULL){
        head = newnode;
        return;
    }
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next=newnode;
    newnode->prev=temp;

}

//////////////////////////
//insertion at head
void inserAtHead(doublyNode *&head, int val){
    //s1: newnode creation
    doublyNode *newnode = new doublyNode(val);
    //s2 update the head->prev pointers
    head->prev=newnode;
    //s3// update the new node next pointers
    newnode->next=head;
    //update the head
    head=newnode;
}

//reversing doubly linked List

void displayReverse(doublyNode * &head){
    doublyNode *temp=head;

    while(temp->next!=NULL){
        temp=temp->next;
    }


    while(temp!=NULL){
        cout<<temp->value;
        if(temp->prev!=NULL){
            cout<<" ---> ";
            
        }
        temp=temp->prev;



    }
    cout<<endl;
    
    }
int main()
{
    doublyNode *head=NULL;
   int n,pos,key,Indexpos,midvalue,choice,value,length;
   bool cycleStatus;

   cout<<"Choice 1:Insertion at head"<<endl
       <<"Choice 2:Insertion at tail"<<endl
       <<"Choice 3:Count The length of the list"<<endl
       <<"Choice 4:Display all the value"<<endl
       <<"Choice 5:Display all the value in reverse"<<endl
       <<"Choice 0:Exit";
       
       cout<<"Next choice :";
       cin>>choice;
       while(choice!=0){
        switch(choice) {
            case 1:
            cout<<"Enter value to insert in head :";
            cin>>value;
            inserAtHead(head,value);
            break;

             case 2:
            cout<<"Enter value to insert in tails :";
            cin>>value;
            insertAttail(head,value);
            break;

            case 3:
          length=  countLength(head);
          if(length==-1){
            cout<<"There is no value in the list"<<endl;
          }else{
            cout<<"The length of the list is "<<length<<endl;
          }
          break;

          case 4:
          display(head);
          cout<<endl;
          break;

          case 5:
          displayReverse(head);
          cout<<endl;
           break;

          default:
          break;

            

        }
        cout<<"Next Choice :";
       cin>>choice;
       }
 

 cout<<endl<<"Linked List: ";
display(head);
 
  return 0;
}