// #include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
 
int n;
cout<< "Enter array size: ";
cin >> n;


int ar[n];

cout<<"Enter array elements : ";
for(int i=0; i < n; i++){
    cin >> ar[i];
}

cout<<"Values are: "<<endl;
for(int i=0; i < n; i++){
    cout<<ar[i]<<endl;
}
 
 
  return 0;
}