// #include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    Node *next;
    int value;

    Node(int val)
    {
        value=val;
        next=NULL;
    }
};
void display(Node *n)
{

    while(n != NULL)
    {
        cout<<n->value;
        if(n->next!=NULL)
        {
            cout<<" -> ";
        }
        n=n->next;
    }
}

void insertAttail(Node *&head,int val)
{
    Node *newNode=new Node(val);

    if (head==NULL)
    {
        head=newNode;
        return;
    }
    Node *temp=head;
    while(temp->next != NULL)
    {
        temp=temp->next;
    }
    temp->next=newNode;
}



void deleteNNodesAfterMNodes(Node *head, int M, int N) {
   Node *current = head, *temp;
   int count;
   while (current) {
     
      for (count = 1; count < M && current!= NULL; count++) {
         current = current->next;
      }
     
      if (current == NULL) {
         return;
      }
      
      temp = current->next;
      for (count = 1; count <= N && temp != NULL; count++) {
         Node *deletingNode = temp;
         temp = temp->next;
        delete deletingNode;
      }
      current->next = temp;
      current = temp;
   }
}
int main()
{
    int size,k,value;
    int m,n;
    Node *head=NULL;
    cout<<"How many elements do you want to add and value of m and n:";
    cin>>size>>m>>n;
    
    cout<<"Enter linked list elements: ";

    for(int i=0; i< size; i++)
    {
        cin >>value;
        insertAttail(head,value);
    }
    cout<<"Linked list before deleting: ";
    display(head);
    deleteNNodesAfterMNodes(head,m,n);
   cout<<endl;
    cout<<"Linked list after deleting: ";
    display(head);
  

    


    return 0;
}
