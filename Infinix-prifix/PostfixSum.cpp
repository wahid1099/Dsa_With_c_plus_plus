// #include<iostream>
#include<bits/stdc++.h>
#include "Mystack.h"
using namespace std;

int postfixSum(string chk){

    Stack<int>st;

    for(int i=0; i<chk.length(); i++){
        if(chk[i] >='0' && chk[i]<='9'){
           st.push(chk[i]-'0');
        }else {
           int b=st.pop();
           int a=st.pop();
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



  string str="562^726/-+*781+*54*+-";
  int value=postfixSum(str);
  cout<<"Sum is "<<value<<endl;


  return 0;
}
