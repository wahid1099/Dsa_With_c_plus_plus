// #include<iostream>
#include<bits/stdc++.h>
using namespace std;


template<typename N>  class NodeQueue{
    public:
    N value;
    NodeQueue *next;

    
    NodeQueue(N value){
        this->value = value;
        next=NULL;

    }
};


template<typename Q>  class Queue{
    NodeQueue <Q>*front;
    NodeQueue <Q>*rear;
     public:
     Queue(){
        front=NULL;
        rear=NULL;
     }

     //enqueue --> push val

     void push(Q val){
        NodeQueue <Q>*newnode = new NodeQueue<Q>(val);

        if(front==NULL){
            front=newnode;
            rear=newnode;
            return;
        }

        rear->next=newnode;
        rear=rear->next;
     }

     //deque pop operation

     Q pop(){
        Q  chk =-1;
        NodeQueue <Q> *delNode;
        if(rear==NULL){
            cout<<"Queue underflowed | There is no element in the queue!"<<endl;
            return chk;
        }
        
        delNode=front;
        front=front->next;
        if(front==NULL){
            rear=NULL;
        }
        chk=delNode->value;
        delete delNode;
        return chk;
     }

     // peek()---------

     Q Front (){
        int chk=front->value;
        return chk;

     }

     //back()---------
     Q Back (){
         int chk=rear->value;
        return chk;
     }
    /// checking empty s
     bool empty (){
        if (front==NULL && rear==NULL){
            return true;
        }else{
            return false;
        }
     }


};

