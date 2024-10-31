#include <bits/stdc++.h>
#define ll long long int
using namespace std;
ll a[1000];
int main()
{
    vector<ll>v;
    ll n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        ll k;
        cin>>k;
        v.push_back(k);
    }
    v.erase(v.begin()+2,v.begin()+5);
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<" ";


}
