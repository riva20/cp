#include <bits/stdc++.h>
#define ll long long int
using namespace std;
ll a[100];
void fun(ll l ,ll r)
{

    if(l<r)
    {
        swap(a[l],a[r]);
        l++,r--;
        fun(l,r);
    }
    else
        return;
}
int main ()
{
    ll n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    fun(0,n-1);
      for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
