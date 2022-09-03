// #include<iostream>
#include<bits/stdc++.h>
#include "Mystack.h"
using namespace std;

int prifixsum(string chk){

    Stack<int>st;

    for(int i=chk.length(); i>0; i--){
        if(chk[i] >='0' && chk[i]<='9'){
           st.push(chk[i]-'0');
        }else {
           int a=st.pop();
           int b=st.pop();
           switch(chk[i]){
            case '+':
            st.push(a+b);
            break;
            case '-':
            st.push(a-b);
            break;
            case '*':
            st.push(a*b);
            break;

            case '/':
            st.push(a/b);
            break;

            case '^':
            st.push(a^b);
            break;

            default:
            break;
           }

        }
    }

        return st.Top();

}

int main()
{



  string str="*+69-31";
  int value=prifixsum(str);
  cout<<"Sum is "<<value<<endl;


  return 0;
}
