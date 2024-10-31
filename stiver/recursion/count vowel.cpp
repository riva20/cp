#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int count_vowel(string s,int en)
{
    if(en==-1)
        return 0;
    if(s[en]=='a'||s[en]=='e'||s[en]=='i'||s[en]=='o'||s[en]=='u')
    return 1+count_vowel(s,en-1);
    else
       return count_vowel(s,en-1);
}
int main()
{
    string s;
    cin>>s;
    int n=s.size();
    int k=count_vowel(s,n-1);
    cout<<k<<endl;

}



