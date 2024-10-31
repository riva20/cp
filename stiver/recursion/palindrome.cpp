#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int check(string s,int st,int en)
{
    if(st>=en)
        return 1;
    if(s[st]!=s[en])
        return 0;
    return check(s,st+1,en-1);
}
int main()
{

    string s;
    cin>>s;
    int n=s.size();
    int k=check(s,0,n-1);
    if(k==1)
        cout<<"YES THE WORD IS PALINDROME"<<endl;
    else
         cout<<"NO THE WORD IS NOT PALINDROME"<<endl;
}
