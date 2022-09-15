// #include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
 
int n;
cin>>n;

for(int i=1; i<=n; i++){
    if(i% 2 != 0){
        //forspace
        for(int s=i; s<n; s++){
            cout<<" ";

        }
        for(int j=1; j<=i; j++){
            cout<<"* ";

     
   }
   cout<<endl; 

        
    }
   

  
   
}

for(int i=1; i<n; i++){
     if(i% 2 != 0){
        //forspace
        for(int s=0; s<i; s++){
            cout<< " ";

        }
        for(int j=n-1; j>i; j--){
            cout<<"* ";

     
   }
   cout<<endl; 

        
    }

}
 
 
 
  return 0;
}