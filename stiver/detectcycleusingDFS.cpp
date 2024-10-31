#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int vis[1000];
vector<int>adj[100];

bool dfs(int src,int parent)
{
    vis[src]=1;

    for(auto it:adj[src])
    {
        if(vis[it]!=1)
        {
            if(dfs(it,src)==true)
                return true;
        }
        else if(it!=parent)
            return true;
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
    int k=0;
    for(int i=1; i<=n; i++)
    {
        if(vis[i]!=1)
        {
            if(dfs(i,-1)==true)
            {
                k=1;
                cout<<"true"<<endl;
                break;
            }

        }
    }
    if(k==0)
    cout<<"false"<<endl;
}

