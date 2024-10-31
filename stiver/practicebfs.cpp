#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int vis[1000];
int main()
{

    int n,m;
    cin>>n>>m;
    vector<int>adj[100];
    for(int i=0;i<m;i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
        vector<int>bfs;
        queue<int>q;
        q.push(1);
        vis[1]=1;
        while(!q.empty())
        {
            int node=q.front();
            q.pop();
            bfs.push_back(node);
            for(auto it:adj[node])
            {
                if(vis[it]==0)
                {
                    q.push(it);
                    vis[it]=1;
                }
            }


        }
        for(auto it:bfs)
            cout<<it<<" ";





}

