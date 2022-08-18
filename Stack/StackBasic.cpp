// #include<iostream>
#include<bits/stdc++.h>
using namespace std;


class Node{
    public:
    int value;
    Node* next;
    Node* prev;
    Node(int val){
        value = val;
        next=NULL;
        prev=NULL;
    }
}


class Stack{
    Node *head;
    Node *top;
       int count=0;
    public:

    Stack(){
        head=NULL;
        top=NULL;
    }
    //push
    void push(int val) {
        Node *newnode = new Node(val);
        if(head==NULL){
            head=top=newnode;
             count++;
            return;
        }
        top->next = newnode;
        newnode->prev =top;
        top=newnode;
         count++;
    }
    //pop
    int pop() {
        Node *delnode ;
        delNode=top;
        int chk=-1;
          if(head==NULL){
            cout<<"stack underflowed"<<endl;
           
            return chk;
          }
        if(top==head){
            head=top=NULL;
        }else{
            top=delnode->prev;
            top->next=NULL;
        }

        chk=delnode->value;
        delete delnode;
         count--;
        return chk;

    }
    //empty
    bool empty() {
        if(head==NULL) return true;
        else return false;
    }
    //size
    int size() {
       return count;
    }
    //top
    int top{
        if(top==NULL){
           cout<<"stack underflowed! there is no element on top"<<endl;
        }
        else{
            return top->value;
        }
    }

};
int main()
{
 

 
 
  return 0;
}