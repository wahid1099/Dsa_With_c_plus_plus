// #include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
 

 int n,m;
 cout<< "Enter size of n:";
 cin>>n;
 int num1[n];
 cout<<"Enter elements of n:";
 for(int i=0;i<n; i++){
  cin>>num1[i];
 }


cout<< "Enter size of m:";
cin>>m;
int num2[m];
 cout<<"Enter elements of m:";

for(int i=0;i<m; i++){
  cin>>num2[i];
 }


 int difNum[n],k=0;
 bool found;

 for(int i=0;i<n;i++){
  found=true;
  for(int j=0;j< m; j++){
    if(num1[i] == num2[j]){
       found=false;
    }

  }
  if(found){
  difNum[k]=num1[i];
      k++;
  }
  
 }

 cout<< "A-B =";
for(int i=0;i< k; i++){
  cout<< difNum[i] <<" ";

}
 
 
  return 0;
}