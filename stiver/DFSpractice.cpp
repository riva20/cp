#include <bits/stdc++.h>
#define ll long long int
using namespace std;
vector<int>adj[1000];
int vis[1000];
vector<int>dfs;
void DFS(int node)
{
    if(vis[node]==0)
    {
        dfs.push_back(node);
        vis[node]=1;
        for(auto it:adj[node])
            DFS(it);
    }
}
int main()
{
    int n,m;

    cin>>n>>m;
    for(int i=1; i<=m; i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);


    }
    DFS(1);
    for(auto it:dfs)
        cout<<it<<" ";



}
