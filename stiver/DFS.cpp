#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int vis[1000];
vector<int>adj[100];
vector<int>dfs;
void df(int node)
{
    if(vis[node]==0)
    {
        dfs.push_back(node);
        vis[node]=1;
        for(auto it:adj[node])
            df(it);
    }

}
int main()
{

    int n,m;
    cin>>n>>m;

    for(int i=0; i<m; i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }


    int node=1;
    df(node);

    for(auto it:dfs)
        cout<<it<<" ";

}
