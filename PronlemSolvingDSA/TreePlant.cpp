// #include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
 
int n;
cin>>n;
long long int p,q;
p=pow(2,n-2);

// cout<<"Value is "<<p<<endl;
// cout<<"Npde number is "<<q<<endl;

if(n==1){
    cout<<"1"<<endl;
}else if(n==2){
    cout<<"2"<<endl;
}else{
    q=pow(2,n-1);
    cout<<p*q<<endl;
}

 
  return 0;
}
 
 
  