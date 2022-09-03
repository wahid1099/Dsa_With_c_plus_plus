// #include<iostream>
#include<bits/stdc++.h>
#include "MainStack.h"
using namespace std;

void reverseString(string chk){
    Stack<string> st;
   
    for(int i=0; i<chk.length(); i++){
      string word =" ";
        while(chk[i] !=' ' && i<chk.length()){
            word+=chk[i];
            i++;
        }

        st.push(word);


    }

    while(!st.empty()){
        cout<<st.Top()<<" ";
        st.pop();
    }
   cout<<endl;
} 

int main()
{
//  string s="HI, How are you doing this?";
string s="abcdef";
 reverseString(s);

 
 
  return 0;
}