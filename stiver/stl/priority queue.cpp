#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main ()
{

    priority_queue<int>pq;
    for(int i=1;i<=5;i++)
    {
        int k;
        cin>>k;
        pq.push(k);
    }
    for(int i=1;i<=5;i++)
    {
        cout<<pq.top();


    }
}
