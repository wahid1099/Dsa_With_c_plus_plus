// #include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
 int t;
 cin>>t;

 int n;
 for(int i=0;i<t;i++){
    cin>>n;
    int number[n];
    for(int i = 0; i < n; i++){
        cin>>number[i];
    }
    
      
    
    
    int count[1001]={0};
    int maxvalue=number[0];
    
    for(int i=0;i<n;i++){
        count[number[i]]++;
      
        if(maxvalue<number[i]){
            maxvalue=number[i];
        }
    }
    int maxCnt=0;
    
    for(int i=1;i<=maxvalue;i++){

       
        if(count[i]>maxCnt){
            maxCnt=count[i];
            
         
        }
       
    }
  
    cout<<n-maxCnt<<endl;
    
    
 }

 
 
  return 0;
}