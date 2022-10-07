#include<bits/stdc++.h>
using namespace std;
typedef pair<int, int> edgeWeightPair;
class Graph{
    int V;
    list <edgeWeightPair> *adj;
public:
    Graph(int value)
    {
        V = value;
        adj = new list<edgeWeightPair>[value];
    }
    void addEdge(int u, int v)
    {
        adj[u].push_back(make_pair(u, v));
    }
    void BFS(int source)
    {
        vector<bool> visited(V,false);
        queue<int>Q;
        visited[source]=true;
        Q.push(source);
        int count = -1;
        while(!Q.empty())
        {
            int u = Q.front();
            count++;
            Q.pop();
            for(auto element: adj[u])
            {
                int store = element.second;
                if(visited[store]!=true)
                {
                    visited[store]=true;
                    
                    Q.push(store);
                }
                
            }
        }
        cout<< count << endl;
    }
};

int main()
{
    int V, E;
    cin>>V>>E;
    Graph g(V);
    for(int i=0; i<E; i++)
    {
        int u, v;
        cin>>u>>v;
        g.addEdge(u,v);
    }
    int source;
    cin >> source;
    g.BFS(source);
    return 0;
   
}