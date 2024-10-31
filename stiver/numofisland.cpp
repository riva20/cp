#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int vis[1000][1000];
int adj[1000][1000];
int ro[]= {-1,-1,-1,0,1,1,1,0};
int co[]= {-1,0,1,1,1,0,-1,-1};


void bfs(int u,int v,int row,int col,queue<pair<int,int>>q
        )
{
    vis[u][v]=1;
    q.push({u,v});
    while(!q.empty())
    {
        int r=q.front().first;
        int c=q.front().second;

        q.pop();
        for(int i=0; i<8; i++)
        {
            for(int j=0; j<8; j++)
            {
                int newr=r+ro[i];
                int newc=c+co[i];
                if(newr>=0&&newr<row&&newc>=0&&newc<col&&vis[newr][newc]!=1)
                {
                    q.push({newr,newc});
                    vis[newr][newc]=1;
                }
            }

        }
    }
}
int main ()
{
    ll row,col;
    cin>>row>>col;
    queue<pair<int,int>>q;

    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cin>>adj[i][j];
        }
    }
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            if(vis[i][j]!=1&&adj[i][j]=1)
            {
                vis[i][j]=1;
                bfs(i,j,row,col,q);
                cnt++;
            }
        }
    }
    cout<<cnt<<endl;
}

