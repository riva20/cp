#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int vis[1000];
int main ()
{
    ll n,m;
    cin>>n>>m;
    vector<int>ad[n+1];
    for(int i=0; i<m; i++)
    {
        int k,j;
        cin>>k>>j;
        ad[k].push_back(j);
        ad[j].push_back(k);
    }


    queue<int>q;
    q.push(1);
     vis[1]=1;
    vector<int>bfs;
    int    j=0;
    while(!q.empty())
    {
        int node=q.front();
        q.pop();
        bfs.push_back(node);
        for(auto it:ad[node])
        {
            if(vis[it]==0)
            {

                vis[it]=1;
                q.push(it);
            }

        }
         for(auto it:bfs)
        cout<<it<<" ";


    }


}


