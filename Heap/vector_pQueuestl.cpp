// #include<iostream>
#include<bits/stdc++.h>
using namespace std;

typedef pair<int, int> PAIR;

int main()
{
 
vector<int> V (3,-1);

for(int i=0; i<V.size();i++){
    cout<<V[i]<<" ";
}


cout<<endl<<endl;
V.push_back(4);
vector<int> :: iterator it;
for(it=V.begin();it!=V.end();it++){
    cout<<*it<<" ";
}
cout<<endl<<endl;
for(auto element:V){
    cout<<element<<" ";
}
cout<<"Max: ";
cout<<endl<<endl;
 

 priority_queue<int,vector<int>> PQ;
 PQ.push(1);
 PQ.push(20);
 PQ.push(4);
 PQ.push(10);
 
 while(!PQ.empty()){
    cout<<PQ.top()<<endl;
    PQ.pop();
 }

 cout<<"Min: ";
 cout<<endl<<endl;

 priority_queue<int,vector<int>,greater<int>> RQ;
 RQ.push(1);
 RQ.push(20);
 RQ.push(4);
 RQ.push(10);
 
 while(!RQ.empty()){
    cout<<RQ.top()<<endl;
    RQ.pop();
 }
 cout<<endl<<endl;


 cout<<"Min: ";
 cout<<endl<<endl;

 priority_queue<PAIR,vector<PAIR>>TQ;

  TQ.push(make_pair(1,9));
  TQ.push(make_pair(6,2));
  TQ.push(make_pair(5,8));
  TQ.push(make_pair(7,3));
 while(!TQ.empty()){
    cout<<TQ.top().first<<"| "<<TQ.top().second<<endl;
    TQ.pop();
 }
 cout<<endl<<endl;

  return 0;
}