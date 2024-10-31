#include<bits/stdc++.h>
//#define ll long long int;
using namespace std;
int a[1000000],b[1000000];
int main ()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n,m,k;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
         for(int i=0;i<n;i++)
        {
           if(a[i]==a[i-1]&&i>0)
            b[i]=b[i-1];
           else
            b[i]=i+1;
        }
        cin>>k;
      for(int i=0;i<k;i++)
        {
            int l,r;
            cin>>l>>r;
            if(b[r-1]<=l)
                cout<<-1<<" "<<-1<<endl;
            else
                cout<<r<<" "<<b[r-1]-1<<endl;
        }


    }
}

