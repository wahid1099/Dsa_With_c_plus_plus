// #include<iostream>
#include<bits/stdc++.h>
#include"mystack.h"
using namespace std;

void reverseSentence(string chk){

 Stack <string> st;
    for(int i=0;i<chk.length();i++){
       string word="";
        while(i<chk.length() && chk[i]!=' '){
            word+=chk[i];
            i++;
            }
            st.push(word);
            
    }

    while(!st.empty()){
        cout<<st.Top()<<" ";
        st.pop();
    }
}
int main()
{
 string s="I am wahid";
 reverseSentence(s);

 
 
  return 0;
}