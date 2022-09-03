// #include<iostream>
#include<bits/stdc++.h>
#include "MainStack.h"
using namespace std;

bool findDuplicateparenthesis(string chk){
    Stack<char>st;
    for(int i=0; i<chk.length();i++){
        if(chk[i]==')'){
            if(st.Top()=='('){
                // cout
                return true;
            }else{
                while(st.Top() != '(') {
                    st.pop();

                }
                st.pop();
            }
        }else{
            st.push(chk[i]);
        }

    }
    return false;
}

int main()
{

    string chk;
    cin>>chk;
    if(findDuplicateparenthesis(chk)){
        cout<<"Duplicate parenthesis found!"<<endl;
    }else{
        cout<<"Not found!"<<endl;
    }
 

 
 
  return 0;
}