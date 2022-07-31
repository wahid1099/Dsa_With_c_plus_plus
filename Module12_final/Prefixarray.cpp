// #include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
 

int ar[5]={78,1,22,12,3};
int pre[5];

pre[0]=ar[0];

for(int i=1;i<5;i++)
{
    pre[i]=ar[i]+pre[i-1];
}
 for(int i=0;i<5;i++){
    cout<<pre[i]<<" ";
 }
 
  return 0;
}