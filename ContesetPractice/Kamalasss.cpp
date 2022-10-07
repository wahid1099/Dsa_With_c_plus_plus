#include<bits/stdc++.h>
using namespace std;

// they tell us maximum n value
#define mx 100
vector<int> v[mx];

bool visited[100];

void bfs(int src){
    queue<int> q;
    q.push(src);
    while(!q.empty()){
        int parent = q.front();
        q.pop();
        if(visited[parent] == true) continue;
        cout<<parent<<endl;
        for(int i=0;i<v[parent].size();i++){
            int children = v[parent][i];
            if(visited[children] == false) q.push(children);
        }
        visited[parent] = true;
    }
}
void dfs(int src){
 cout<<src<<endl;
 visited[src] = true;
 for(int i=0;i<v[src].size();i++){
    int children = v[src][i];
    if(visited[children] == false){
        dfs(children);
    }
 }
}


int main(){

    // graph input
    int n,e;
    cin>>n>>e;
    for(int i=0;i<e;i++){
        int a,b;
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    // bfs take a root. In graph there is no root.
    memset(visited,false,sizeof(visited));
    //bfs(1);
    dfs(1);
}







/*

Graph must tell node and edge
Input:
6 7
5 3
4 5
1 0
1 2
1 3
3 0
4 3

*/
/*
dfs

7 7
1 2
1 6
2 3
2 4
4 5
4 6
6 7


*/