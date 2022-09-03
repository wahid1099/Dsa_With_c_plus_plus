// #include<iostream>
#include<bits/stdc++.h>
#include "MainStack.h"
using namespace std;

int main()
{
 
int n;
cin>>n;
int array[n];

for(int i=0; i<n; i++){
    cin>>array[i];
}

Stack<int> st;
Stack<int> minstack;
int min=INT_MAX;


 for(int i=0; i<n; i++){

    if(array[i]<=min){
        minstack.push(array[i]);
        min=array[i];
    }

    st.push(array[i]);

 }


 while(!st.empty()){
    //if the top of min stack is equal 

    if(minstack.Top()!=st.Top()){
        st.pop();
        cout<<minstack.Top()<<" ";
    }else{
       cout<<minstack.Top()<<" ";
         st.pop();
         minstack.pop();
    }
 }
 
  return 0;
}