#include<bits/stdc++.h>
using namespace std;
// class for graph

class Graph{
    int V;
    list<int> *adj;
public:
    Graph(int V){
        this->V = V;
        adj = new list<int>[V+1];
    }
    void addEdge(int u,int v){
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    void printGraph(int u){
        cout<<u<<" : ";
        for(auto it= adj[u].begin();it != adj[u].end();it++){
            cout<<*it;
            auto k = it;
            if(++k != adj[u].end()){
                cout<<"->";
            }
        }
        cout<<endl;
    }

};

int main(){
    int V,E;
    cin>>V>>E;
    Graph g(V);
    for(int i=0;i<E;i++){
        int u,v;
        cin>>u>>v;
        g.addEdge(u,v);
    }
    for(int i=1;i<=V;i++){
        g.printGraph(i);
    }
    return 0;
}
/*
input:
4 5
1 2
1 3
2 4
2 3
4 3
output:
1 : 2->3
2 : 1->4->3
3 : 1->2->4
4 : 2->3
*/