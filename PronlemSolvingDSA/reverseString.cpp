// #include<iostream>
#include<bits/stdc++.h>
#include "MainStack.h"
using namespace std;

void reverseString(string str){
    Stack<char>st;
    for(int i=0; i<str.length(); i++){
        st.push(str[i]);
}

while(!st.empty()){
    cout<<st.Top();
    st.pop();
}

}
int main()
{
 

string s="wow";
reverseString(s);

 
 
  return 0;
}