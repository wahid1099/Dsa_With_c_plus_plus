// #include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
 
int n;
cin>>n;
int l[n+1],r[n+1];
set<int>left,right;
for(int i=1;i<=n;i++){
    cin>>l[i]>>r[i];
    if(l==0)left.insert(i);
    if(r[i]==0)right.insert(i);

}

int count=0,free[n+1];

bool vis[n+1]={0};

for(int i=1;i<=n;i++){
    if(vis[i]==false){
        int cur=i;
        ++count;
        while(cur!=0){
            vis[cur] = true;
            free[cur] = count;
            cur=r[cur];
        }
        cur=i;
        while(cur!=0){
            vis[cur]=true;
            free[cur]=count;
            cur=l[cur];
        }
    }
}
 
 int node=1;
 while(right.size()>1){
    if(r[node]==0){
        auto it=left.begin();
        if(free[*it]!=free[node]){
            r[node]=*it;
            l[*it]=node;
            left.erase(it);
            right.erase(node);
        }else{
            left.erase(it);
            it=left.begin();
            r[node]=*it;
            l[*it]=node;
            left.erase(it);
            right.erase(node);
        }
    }
    free[r[node]]==free[node];
    node=r[node];
 }

 for(int i=1;i<=n;i++){
    cout<<l[i]<<" "<<r[i]<<endl;
 }
  return 0;
}