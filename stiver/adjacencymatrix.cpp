#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int ad[100][100];

int main () {
ll n,m;
cin>>n>>m;
for(int i=0;i<m;i++)
{
    int k,j;
    cin>>k>>j;
    ad[k][j]=1;
    ad[j][k]=1;

}
   for(int i=0;i<=n;i++)
{
    for(int j=0;j<=n;j++)
    {
        cout<<ad[i][j]<<" ";

    }
    cout<<endl;
}


}

