// #include<iostream>
#include<bits/stdc++.h>
using namespace std;


template<typename N> class Node{
    public:
    N value;
    Node* next;
    Node* prev;
    Node(N val){
        value = val;
        next=NULL;
        prev=NULL;
    }
};

//stack st--> 
template<typename S>  class Stack{
    Node <S>*head;
    Node <S>*top;
       int count=0;
    public:

    Stack(){
        head=NULL;
        top=NULL;
    }
    //push
    void push(S val) {
        Node <S> *newnode = new Node<S>(val);
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
    S pop() {
        Node <S> *delnode ;
        delnode=top;
        S chk;
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
    S Top(){
        S chk;
        if(top==NULL){
           cout<<"stack underflowed! there is no element on top"<<endl;
        }
        else{
            chk=top->value;
            
        }
        return chk;
    }

};
// int main()
// {
 

 
 
//   return 0;
// }