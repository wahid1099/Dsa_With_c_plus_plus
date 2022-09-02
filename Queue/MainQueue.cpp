// #include<iostream>
#include<bits/stdc++.h>
#include"MyQueue.h"

using namespace std;

int main()
{

    Queue <int> q;
        int n;
        cin>>n;

        for (int i = 0; i < n; i++){
            int chk;
            cin>>chk;
            q.push(chk);
        }

        // while(!q.empty()){
        //    cout<< q.pop()<<" ";
        // }

        if(!q.empty()){
            cout<<"Front Value: "<<q.Front()<<endl;
        }
        if(!q.empty()){
            cout<<"Back value: "<<q.Back()<<endl;
        }
   
 

 
 
  return 0;
}