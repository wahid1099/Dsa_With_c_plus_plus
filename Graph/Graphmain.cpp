// #include<iostream>
#include<bits/stdc++.h>
using namespace std;

typedef pair<int, int> edgewithpair;
class Graph{
    int v;
    list <edgewithpair> *adj;
    public:
    Graph(int v){
        this->v = v;
        adj=new list<edgewithpair> [v];
    }
    void addEdge(int u,int v,int w){
        adj[u].push_back(make_pair(v,w));
        adj[v].push_back(make_pair(u,w));
    }
    void printNeighbour(int chk){
        cout<<chk<<":";
        for(auto i=adj[chk].begin();i!=adj[chk].end();i++){
            cout<<"("<<(*i).first<<","<<(*i).second<<")"<<endl;
        }
    }

    void BFS(int source ){
        vector<bool> visited(v,false);
        queue<int> q;
        visited[source]=true;
        q.push(source);
        while(!q.empty()){
            int u=q.front();
            cout<<u<<" ";
            q.pop();
            for( auto element : adj[u] ){
                int v=element.first;
                if(visited[v] != true){
                    visited[v]=true;
                    q.push(v);
                }
            }

        }
    }
    void DFS(int source){
       static   vector<bool> visited(v,false);
        queue<int> q;
        visited[source]=true;
        cout<<source<<" ";
        for(auto element: adj[source])
        {
            int v=element.first;
            if(visited[v]!= true){
                DFS(v);

            }
           
        }

    }

};

int main()
{
 
int v,e,source;
cin>>v>>e>>source;
Graph g(v);
for(int i=0;i<e;i++){
    int u,v,w;
    cin>>u>>v>>w;
    g.addEdge(u,v,w);

}
 
 for(int i=0;i<v;i++){
    g.printNeighbour(i);
    cout<<endl;


 }
 cout<<endl<<endl;
 g.BFS(source);

  cout<<endl<<endl;
 g.DFS(source);
 
  return 0;
}

// 7 10 0
// 0 1 7
// 0 2 1
// 0 5 3
// 1 3 11
// 2 3 3
// 3 6 1
// 6 5 2
// 6 4 4
// 5 4 6
// 2 5 8