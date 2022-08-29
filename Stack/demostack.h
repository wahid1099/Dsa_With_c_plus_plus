#include<bits/stdc++.h>
using namespace std;

// doubly linked list
template<typename N> class Node
{
public:
    N data;
    Node* prev;
    Node* next;
    Node(N data)
    {
        this->data = data;
        prev = NULL;
        next = NULL;
    }
};
// Stack<int> st
template<typename S> class Stack
{
public:
    Node<S> *top;
    Node<S> *head;
    Node <S> *midValue;
    int count;
public:
    Stack()
    {
        top = NULL;
        head = NULL;
        midValue= NULL;
        count = 0;
    }
    // PUSH
    void push(S val)
    {
        Node<S> *newNode = new Node(val);
        count++;
        if(head == NULL )
        {
            head = top = newNode;
            midValue=newNode;
            return;
        }
        top->next = newNode;
        newNode->prev = top;
        top = newNode;
        if(count %2==1){
            midValue=midValue->next;
        }
    }

    // POP
     S pop()
    {
        // there is two corner case
        // 1. one element
        // 2. no element

        Node<S> *delNode = top;
        S chk;
        if(head == NULL){
            cout<<"Stack Underflow"<<endl;
             midValue=NULL;
            return chk;
        }
        if(top == head)
        {
            head = top = NULL;
        }
        else
        {
            top = delNode->prev;
            top->next = NULL;
        }
        chk = delNode->data;
        count--;
        delete delNode;
        if(count %2==0){
            midValue=midValue->prev;
        }
        return chk;

    }

    S mid(){
         S chk;
        if(count==0){
            cout<<"No mid value";
            return chk;
        }
          chk=midValue->data;

        return chk;
    }
    // EMPTY
    bool isEmpty(){
        if(head== NULL) return true;
        else return false;
    }
    // SIZE
    int size(){
        return count;
    }
    // TOP
    S Top(){
        S chk;
        if(top == NULL){
            cout<<"Stack Underflow | There is no element in stack"<<endl;
        }
        else{
            chk = top->data;
        }
        return chk;
    }

};