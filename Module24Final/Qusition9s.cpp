#include <bits/stdc++.h>
using namespace std;

const int N = 110;

struct Node
{
    int a;
    int b;
    int c;
};

Node node[N];
int n;
queue<int> Q;

int dfs(int x)
{
    if(node[x].c == 0){
        return x;
    }
    return dfs(node[x].c);
}

int main()
{
    int mark;
    int ne;

    while(scanf("%d", &n) == 1){
        mark = 1;
        while(!Q.empty()){
            Q.pop();
        }
        for(int i = 1; i <= n; i ++){
            scanf("%d%d", &node[i].a, &node[i].c);
            node[i].b = i;
            if(!node[i].a){
                Q.push(i);
            }
        }
        while(!Q.empty()){
            int now;

            now = Q.front();
            Q.pop();
            if(!mark){
                node[now].a = ne;
                node[ne].c = now;
            }
            mark = 0;
            ne = dfs(now);
        }
        for(int i = 1; i <= n; i ++){
            printf("%d %d\n", node[i].a, node[i].c);
        }
    }

    return 0;
}