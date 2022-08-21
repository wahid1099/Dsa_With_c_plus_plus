// #include<iostream>
#include<bits/stdc++.h>
#include"mystack.h"

using namespace std;

void reverseStack(Stack<int> &chk){
    if(chk.empty()){
        return;
    }

}

int main()
{
 
 Stack <int> st;

 st.push(1);
 st.push(2);
 st.push(3);
 st.push(4);
 st.push(5);

 reverseStack(st);
 
  return 0;
}