// #include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
 
int a, b,c;
cin >> a >> b>>c;
int count=0;
//a,b,c
if(a==b && b==c && a==c){
  cout<<1;
}
 else if(a==b && b !=c && a!=c){
  cout<<2;
 }
  else if(a==c && b !=c && a!=b){
  cout<<2;
 }
 else if(b==c && a !=c && a!=b){
  cout<<2;
 }
 else if(a!=b && b!=c && a!=c){cout<<3;
 }

 
  return 0;
}