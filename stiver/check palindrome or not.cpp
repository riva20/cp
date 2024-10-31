#include <bits/stdc++.h>
#define ll long long int
using namespace std;
ll a[100];
string s;
int fun(ll i,ll n)
{

    if(i<n/2)
    {
        if(s[i]!=s[n-i-1])
            return 1;
        else
        {
            i++;
            fun(i,n);
        }
    }
    else
        return 0;
}
int main ()
{
    ll n;
    cin>>n;

    cin>>s;
    int k=fun(0,n);
    if(k==0)
        cout<<"palindrome"<<endl;
    else
        cout<<"not palindrome"<<endl;
}

