// #include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
 
string s;
cin>>s;
int range=s.length();
bool ispalindrome=false;
for (int i=0,j=range-1; i<j; i++,j--){
    // cout<<"yeah";
    if(s[i]!=s[j]) {
        ispalindrome=true;
       
    }
}
 
 if(ispalindrome){
    cout<<"No";
 }
 else{
    cout<<"Yes";
 }
  return 0;
}