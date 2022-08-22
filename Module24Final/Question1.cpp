// #include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
 
 int t;
 cin >>t;

 int number[t];


 for (int i=0; i< t; i++){
    cin>>number[i];
    
    
 }

  

 int maxvalue=number[0];
 int count[t+1]={0};


 for(int i=0; i <t;i++){
    count[number[i]]++;
    if(number[i]>maxvalue){
        maxvalue=number[i];
    }
 }


 for (int i=1; i<=maxvalue; i++){
   
    if(count[i]>0){
        cout<<i<<"=>"<<count[i]<<endl;
    }
 }
 
 
  return 0;
}