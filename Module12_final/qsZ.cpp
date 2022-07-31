// #include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
 
string s;
cin>>s;

int range =s.length();
int start = 0,end=range-1;

for (int i = 0; i < range;i++){
    if(s[i]=='A'){
        start = i;
        break;
    }

}
 
 
for (int i = range-1; i >=0;i--){
    if(s[i]=='Z'){
        end = i;
        break;
    }

}

cout<<end-start+1;
  return 0;
}