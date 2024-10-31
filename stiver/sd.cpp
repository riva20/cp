#include <bits/stdc++.h>
using namespace std;
#define ll long long int
ll a[1000000],b[1000000];
int main ()
{
    ll tc;
    cin>>tc;
    while(tc--)
    {
        int n,m,k;
        cin>>n;
        map<ll,ll>mp;
        int col=0;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            mp[a[i]]++;
            if(mp[a[i]]==1)
                col++;
            b[i]=col;

        }
        ll q;
        cin>>q;


        for(int i=0; i<q; i++)
        {
            ll l,r;
            cin>>l>>r;
ll ans=0;

                for(int j=l-1; j<=r-1; j++)
                {
                    if(a[l-1]!=a[j])
                    {
                        cout<<l<<" "<<j+1<<endl;
                        ans=1;
                        break;
                    }
                }
                if(ans==0)
                    cout<<-1<<" "<<-1<<endl;
            }
        }
    }


