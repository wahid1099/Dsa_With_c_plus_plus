// #include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    Node *Next;
    int value;
    Node(int val){
        if(val %2==0 ){
            value = -1;
        }else{
            value = val;
        }
       
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

int main()
{
 

    Node *head=NULL;
    
   int n,val;
   cout<<"How many elements do you want to add: ";
   cin >> n;
//    cout<<"Enter t"
cout<<"Enter the value: ";
   while(n--){
      
        cin>>val;
        insertAtTail(head,val);      
    }
   
cout<<endl<<"Linked List: ";
display(head);
 
 
 
  return 0;
}