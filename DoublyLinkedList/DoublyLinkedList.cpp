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

///////////
    void insetionAtSpostion(doublyNode *&head,int pos,int val){
        int i=0;
   
    doublyNode *temp=head;
    doublyNode *temp2;

    while(i<pos-2){
        temp=temp->next;
        i++;
    } 
    doublyNode *newnode= new doublyNode(val);

    temp2=temp->next;

    
     temp->next=newnode;    
    temp2->prev=newnode;
    newnode->prev=temp;
    newnode->next=temp2;
    }

    //searching for values in
    int searchUniqueValue(doublyNode *&head,int val){
       

        if(head==NULL){
           
            return -1;
        }
         doublyNode *temp = head;
         int index=1;
         while(temp->value !=  val){
            if(temp->next==NULL){
                return -1;
            }
            temp = temp->next;
            index++;
         }

         return index;
      }


      //search duplicate values
      void searchduplicateValue(doublyNode *&head , int key){
         if(head==NULL){
           cout<<"Linked list is empty!";
            return;
        }

        int size=countLength(head);
        int position[size+1],k=1;
        int count=1;
        int flag=0;
        doublyNode *temp = head;

        while(temp != NULL){

            if(temp->value == key){
                position[k] = count;
                k++;
                flag = 1;
            }
        temp = temp->next;
            count++;
        }

        if(flag==0){
             cout<<"The search value is not in the list";
        }else{
           for(int i=1;i<k;i++){
                cout<<position[i];
                if(i<k-1) cout<<",";

            }
            cout<<endl;
        }
      }
      //deletion at head of list

      void deleteHead(doublyNode *&head){
        if(head!=NULL){
        doublyNode *temp = head;
        head=temp->next;
        head->prev = NULL;
         delete temp;
        
        
        }else{
            cout<<"The linked list is empty!"<<endl;
        }

       


      }

      //delete tail

      void deleteTail(doublyNode *&head){
        doublyNode *temp =head;

        if(temp!=NULL && temp->next->next != NULL){
            while(temp->next->next != NULL){
                temp=temp->next;
            }
             doublyNode *delNode=temp->next;
             temp->next=NULL;
             delete delNode;
        }
        else{
            if(temp==NULL){
                cout<<"Linked list is empty!"<<endl;
            }else{
                deleteHead(head);
                
            }
        }
      }

      //delete at specified position

      void deleteatspecificpos(doublyNode *&head,int position){

        doublyNode *temp = head;
        if(temp != NULL && position<=countLength(head)){
            if(position==1){
                deleteHead(head);
            }else if(position==countLength(head)){
                deleteTail(head);
            }else{
                int i=1;
                while(i<position-1){
                    temp=temp->next;
                }
                doublyNode *delNode=temp->next;
                doublyNode *temp2=temp->next->next;
                temp2->prev=temp;
                temp->next=delNode->next;
                delete delNode;

            }

        }
        else{
            if(position>countLength(head)){
                cout<<"Position out of bound";
            }else{
                 cout<<"There is no value in linked list ";
            }
        }
      }

      void deletebyValue(doublyNode *&head,int value){
         int position;
         position=searchUniqueValue(head,value);
         if(position==-1){
        cout<<"Value is not found in linked list";
       }else{
        deleteatspecificpos(head,position);
     }
      }

      /////////////
      int findMidValue(doublyNode *&head){
         if(head==NULL){
            return -1;
        }
        doublyNode *slow=head;
        doublyNode *fast=head;
        while(fast->next != NULL && fast->next->next != NULL){
            slow=slow->next;
            fast=fast->next->next;
        }

        return slow->value;
      }

//reversing untill given index 

//reversing doubly linked List

void displayReverseIndex(doublyNode * &head,int index){
    doublyNode *temp=head;
    int i=1;

    while(i!=index){
        temp=temp->next;
        i++;
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
       <<"Choice 6:Insertion at specific position"<<endl
       <<"Choice 7:Serch value (Unique list)"<<endl
       <<"Choice 8:Serch value (Duplicate list)"<<endl
       <<"Choice 9:Delete Head"<<endl
       <<"Choice 10:Delete Tail"<<endl
       <<"Choice 11:Delete at specific position"<<endl
       <<"Choice 12:Delete by value (unique list)"<<endl
       <<"Choice 13:Find mid value"<<endl
       <<"Choice 14::Display all the value in reverse till given index"<<endl
       <<"Choice 0:Exit"<<endl;
       
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

           case 6:
           cout<<"Enter the position :";
           cin>>pos;
           cout<<"Enter the value :";
           cin>>value;
           insetionAtSpostion(head,pos,value);
            break;
          
           case 7:
           cout<<"Enter the value to search :";
           cin>>value;
         Indexpos=  searchUniqueValue(head,value);

         if(Indexpos == -1){
         cout<<"There is no value in the linked list!"<<endl;
         }else{
            cout<<"The value is found at"<<Indexpos<<endl;
         }
         break;

         case 8:
         cout<<"Enter the value to search :";
         cin>>value;
         cout<<"The Number is at position :";
         searchduplicateValue(head,value);
         break;

         case 9:
         deleteHead(head);
         cout<<"Head deleted!"<<endl;
         break;

         case 10:
         deleteTail(head);
         cout<<"Tail deleted!"<<endl;
         break;

         case 11:
         cout<<"Enter the position of the delete position: ";
         cin>>pos;
         deleteatspecificpos(head,pos);
         break;

         case 12:
         cout<<"Enter the value to delete :";
         cin>>value;
         deletebyValue(head,value);

         break;

         case 13:
         int mid;
         mid=findMidValue(head);
         if(mid==-1){
            cout<<"No value found!";
         }else{
           cout<<"The mid value is "<<mid<<endl;
         }
         
       case 14:
       cout<<"Ener the index to reverse is ";
       cin>>Indexpos;
      displayReverseIndex(head,Indexpos);
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