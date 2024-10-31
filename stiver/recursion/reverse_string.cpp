#include <bits/stdc++.h>
#define ll long long int
using namespace std;
string check(string &s,int st,int en)
{
    if(st>=en)
        return s;
    swap(s[st],s[en]);
    return check(s,st+1,en-1);
}
int main()
{

    string s;
    cin>>s;
    int n=s.size();
    check(s,0,n-1);
   cout<<s<<endl;
}
