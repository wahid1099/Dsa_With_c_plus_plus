// #include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<int> v[190];
bool visited[190];

// int checkNeighbour

void bfs(int src,int key){
    queue<pair<int,int>> q;
   // int count = 0;
    q.push({src,0});
    while(!q.empty()){
        pair<int,int> parent=q.front();
        q.pop();
        //   if(parent.first==key || parent.second==key){
        //    cout<<parent.first<<" "<<parent.second<<endl;
        // }
        if(visited[parent.first] == true) continue;
         cout<<parent.first<<" "<<parent.second<<endl;
      

       for(int i=0;i<v[parent.first].size();i++){
        int children=v[parent.first][i];
        if(visited[children]==false) q.push({children,parent.second+1});

       }
       visited[parent.first]=true;
    }
 //  cout<<count<<endl;
}

int main()
{

  int n,e;
  cin >> n >> e;
int save;
  for(int i=0; i<e; i++){
    int a, b;
    
    cin >> a >> b;
    if(i==0){
      save=b;
    }
    v[a].push_back(b);
    v[b].push_back(a);

  }

  memset(visited,false,sizeof(visited));


  int key;
  cin >>key;
  // cout<<"A is "<<save<<endl;
  bfs(save,key);




  return 0;
}
