#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main ()
{
    int n;
    cin>>n;
   int prev=1;
   int prev2=0;
   for(int i=2;i<=n;i++)
   {
      int curr=prev+prev2;
       prev2=prev;
       prev=curr;
   }
   if(n>=2)
   cout<<prev<<endl;
   else
    cout<<n<<endl;
}

