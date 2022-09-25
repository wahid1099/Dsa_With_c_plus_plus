// #include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,sum=0;
    
    cin>>n;
 
 int array[n];
 for(int i=0; i<n; i++){
    cin>>array[i];
 }

  for(int i=0; i<n; i++){
    if(array[i]<0){
        array[i]=1;
    }
    sum+=array[i];
 }

cout<<"Sum is "<<sum<<endl;
for(int i=0; i<n; i++){
    cout<<array[i]<<" ";
}
 
 
  return 0;
}
// 6
// 12 -9 7 3 4 3