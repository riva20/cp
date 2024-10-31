#include <bits/stdc++.h>
#define ll long long int
using namespace std;
string check(string &s,int en)
{
    if(en==-1)
        return s;
    s[en]='A'+s[en]-'a';
    return check(s,en-1);
}
int main()
{

    string s;
    cin>>s;
    int n=s.size();
    check(s,n-1);
    cout<<s<<endl;
}
