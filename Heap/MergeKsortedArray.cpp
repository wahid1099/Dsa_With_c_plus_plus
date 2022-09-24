// #include<iostream>
#include<bits/stdc++.h>
using namespace std;
typedef pair<int, int> PAIR;
int main()
{
 
int k;
cout<<"Enter How many times you want to add :";
cin>>k;

vector<vector<int>> allvalues(k);

for(int i=0; i<k; i++){
    int size;
    cin>>size;

    allvalues[i]=vector<int>(size);
    for(int j=0;j<size;j++){
         cin>>allvalues[i][k];

    }
   
}


vector<int> indexTracker(k,0);
priority_queue<PAIR,vector<PAIR>,greater<PAIR>> TQ;

for(int i=0;i<k;i++) {
    TQ.push(make_pair(allvalues[i][0],i));
}

vector<int> ans;
while(!TQ.empty()) {
    PAIR x=TQ.top();
TQ.pop();
ans.push_back(x.first);
if(indexTracker[x.second]+1<allvalues[x.second].size()){
    TQ.push(make_pair(allvalues[x.second][indexTracker[x.second]+1],x.second));
}

indexTracker[x.second]+=1;
}
for(auto element:ans){
    cout<<element<<" ";
} 

cout<<endl<<endl;
 
  return 0;
}