// #include<iostream>
#include<bits/stdc++.h>
#include "Mystack.h"
using namespace std;

int precisionCalc(char c){
    if(c=='^'){
        return 3;
    }else if(c=='/' || c=='*'){
        return 2;
    }else if(c=='+' || c=='-' ){
        return 1;
    }else{
        return -1;
    }
}

string infixtoPrifix(string chk){
    Stack<int>st;
    string result;
    for(int i=0;i<chk.length();i++){
        if(chk[i] >='0' && chk[i] <= '9'){
            result+=chk[i];
        }else if(chk[i]==')'){
            result+=chk[i];
        }else if(chk[i]=='('){
            result+=chk[i];
        }
    }
}

int main()
{
 

 
 
  return 0;
}