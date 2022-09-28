// #include<iostream>
#include<bits/stdc++.h>
#include "Mystack.h"
using namespace std;


int prefixEvalutaion(string checkvalue){
    Stack <int> st;

    for(int i=checkvalue.length()-1; i>=0;i--){
        if (checkvalue[i] >='0' && checkvalue[i] <= '9'){
            st.push(checkvalue[i]-'0');
        }else{
           int a=st.pop();
           int b=st.pop();

           switch(checkvalue[i]){
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
            st.push(pow(a,b));
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
 cout<<"Prefix = "<<prefixEvalutaion("-*5+^62-7/26+*7+81*54")<<endl<<endl;

 string chk="-*5+^62-7/26+*7+81*54";
 reverse(chk.begin(), chk.end());
 cout<<endl;
 
 cout<<"Revers "<<chk<<endl<<endl;
 
  return 0;
}