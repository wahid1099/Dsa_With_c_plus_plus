// #include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
 int t;
 cin >> t;
 for (int i = 0; i < t; i++)
 {
    int n;
    cin >> n;
    int num[n];
    for (int i = 0; i < n; i++){
        cin >> num[i];
    }
    int mn=num[0];
    //int mx=num[0];
    int count=0;
    for (int i = 0; i <n;i++){
       while(num[i] != mn){
        num[i]--;
        count++;
       }
        
    }
    cout<<count<<endl;
 }

 
 
  return 0;
}