#include<bits/stdc++.h>
using namespace std;
class Graph{
    int V;
    int k;
    vector<int> vv[190];

public:
    Graph(int value)
    {
        V = value;
    }
    void addEdge(int u, int v)
    {
        vv[u].push_back(v);
        vv[v].push_back(u);
    }
    void bfs(int src, int s)
    {
        vector<bool> visited(V,false);
        queue<pair<int, int>> q;
        q.push({src, 0});
        while(!q.empty())
        {
            pair<int, int> parent = q.front();
            q.pop();
            if(visited[parent.first]==true)
            {
                continue;
            }
            if(parent.second==s)
            {
                cout << parent.first << " ";
            }
            //cout << parent.first<<"-->"<<parent.second << endl;
            for (int i = 0; i < vv[parent.first].size();i++)
            {
                int children = vv[parent.first][i];
                if(visited[children]==false)
                {
                    q.push({children, parent.second + 1});
                }
            }
            visited[parent.first] = true;
        }
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
    int level;
    cin >> level;
    g.bfs(0, level);
    return 0;
   
}