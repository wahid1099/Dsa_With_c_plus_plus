// #include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
 
int t;
cin >> t;
for(int i=0; i<t; i++){
    int  sum=0;
    int n,c;
    cin>>n>>c;
    int A[n];
    for(int j=0;j<n; j++){
       cin>>A[j];
    }

    for(int i=0; i<n; i++){
        sum+=A[i]*2;
    }

    if(sum>c){
        cout<<"No"<<endl;
    }else{cout<<"Yes"<<endl;
    }
}
 
 
  return 0;
}