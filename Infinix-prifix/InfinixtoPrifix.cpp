// #include<iostream>
#include<bits/stdc++.h>
#include "Mystack.h"

using namespace std;


int precisionCalc(char c){

    if (c=='^'){
        return 3;

    }else if(c=='/' || c=='*'){
        return 2;
    }else if(c=='+' || c=='-'){
        return 1;
    }else{
        return -1;
    }

}

string infixtoPrifix(string chk){
    reverse(chk.begin(),chk.end());
    Stack <char>st;
    string result;
    for(int i=0;i<chk.length();i++){
        if(chk[i]>='0' && chk[i]<='9'){
            result+=chk[i];
        }else if(chk[i]==')' ){
            st.push(chk[i]);
        }else if(chk[i]=='('){
            while(!st.empty() && st.Top()!=')'){
                result+=st.pop();
            }
            if(!st.empty()){
                st.pop();
            }

        }else{
            while( !st.empty() && precisionCalc(st.Top())>=precisionCalc(chk[i])){
                result+=st.pop();
            }
            st.push(chk[i]);
        }
    }

    while(!st.empty()){
        result+=st.pop();
    }

    reverse(result.begin(), result.end());
    return result;
}
int main()
{
 

 
 string infix="(7+(4*5))-(2+0)";
 string prefix;
  cout<<"Before: "<<prefix<<endl;

 prefix=infixtoPrifix(infix);

cout<<"After Infix to Prifix Evaluation: ";
 cout<<prefix<<endl<<endl;
 
  return 0;
}