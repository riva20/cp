#include <bits/stdc++.h>
#define ll long long int
using namespace std;
bool detect(int src,vector<int>adj[],int vis[])
{
    queue<pair<int,int>>q;
    q.push({src,-1});
    vis[src]=1;
    while(!q.empty())
    {
        int node=q.front().first;
        int parent=q.front().second;
        q.pop();
        for(auto it:adj[node])
        {
            if(vis[it]!=1)
            {
                vis[node]=1;
                q.push({it,node});

            }
            else if(parent!=it)
                return true;
        }

    }
    return false;
}
int main ()
{
    int n,m;
    cin>>n>>m;
    vector<int>adj[m+1];
    for(int i=0; i<m; i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);


    }
    int vis[n+1]= {0};
    int k=0;
    for(int i=1; i<=n; i++)
    {
        if(vis[i]!=1)
        {
            if(detect(i,adj,vis)==1)
            {
                k=1;
                cout <<"true"<<endl;
                break;
            }

        }
    }
    if(k==0)
        cout<<"false"<<endl;

}
