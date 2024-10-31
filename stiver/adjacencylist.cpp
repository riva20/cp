#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main () {
ll n,m;
cin>>n>>m;
vector<int>ad[n+1];
for(int i=0;i<m;i++)
{
    int k,j;
    cin>>k>>j;
    ad[k].push_back(j);
    ad[j].push_back(k);


}
   for(int i=1;i<=n;i++)
{
    cout<<i<<":";
    for(int j=0;j<ad[i].size();j++)
    {
        cout<<ad[i][j]<<" ";

    }
    cout<<endl;
}


}


