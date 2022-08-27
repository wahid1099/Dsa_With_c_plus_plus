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

    for (int i=0; i< t; i++){
   
    if(maxvalue<number[i]){
      maxvalue=number[i];
    }
    
    
 }
  


  int count[maxvalue+1]={0};


 for(int i=0; i <t;i++){
    count[number[i]]++;
 
 }




 for (int i=0; i<=maxvalue; i++){
   
    if(count[i]>0 ){
        cout<<i<<"=>"<<count[i]<<endl;
    }
 }
 
 
  return 0;
}