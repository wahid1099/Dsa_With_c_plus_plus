// #include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
 
int n;
cin >> n;
string s;
cin>>s;
bool p = false,m=false;
int maxvalue=0;

int plus=0,minus=0;
for (int i = 0; i <n; i++){
    if(p){
        plus=0;
        p=false;
    }
    if(s[i] == '+'){
       plus++;
       m=true;
       if(maxvalue<plus){
        maxvalue=plus;
       }

       
    }else{
        if(m){
            minus=0;
            minus=false;
        }
        minus++;
        p=true;
        if(maxvalue<minus){
            maxvalue=minus;
        }
        
    }
}
 
cout<<maxvalue<<endl;
  return 0;
}