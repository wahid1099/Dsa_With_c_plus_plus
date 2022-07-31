// #include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
 
int t,n;
cin >> t;
for(int i= 0; i < t; i++){
    cin>> n;
    int num[n];
    for(int j=0; j < n; j++){
          cin >> num[j];
    }

   // sortArry(n,num);
   sort(num, num+n);
    // cout<<"After sorting";
    // for(int i = 0; i < n; i++) {
    //     cout<<num[i]<<" ";
    // }

    int firstElement=0 ;
    for(int i = 0; i <n; i++){
      if(num[i]<num[i+1]){
        firstElement = i;
        break;
      }

    }
   // cout<<"the index is "<<firstElement<<endl;
   cout<<n-(firstElement+1)<<endl;
   firstElement=0 ;
   
}
 
 
  return 0;
}