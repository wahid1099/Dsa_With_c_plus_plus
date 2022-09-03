// #include<iostream>
#include<bits/stdc++.h>
#include "MainStack.h"
using namespace std;

bool areBracketsbalanced(string chk){
    Stack<char>st;

    for(int i = 0; i < chk.length();i++){
       // cout<<"value is "<<chk[i]<<" "<<endl;
     if(st.empty()){
       st.push(chk[i]);
       // cout<<"TOp"<<st.top()<<endl;
     }
     
    else if ((st.Top() == '(' && chk[i] == ')')
				|| (st.Top() == '{' && chk[i] == '}')
				|| (st.Top() == '[' && chk[i] == ']')) {
			
			st.pop();
		}
     else{
        st.push(chk[i]);
     }

    }

    if(st.empty()){
        return true;
    }

        return false;
}


int main()
{

string check="({(())[{}]})";

if(areBracketsbalanced(check)){
    cout<<"Yes"<<endl;
}else{
    cout<<"No";
}


  return 0;
}
