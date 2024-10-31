#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main ()
{
    ll tc;
    cin>>tc;
    while(tc--)
    {

        string s;
        cin>>s;
        ll l=s.size();
        ll k=0;
        stack<char>st;
        for(int i=0; i<l; i++)
        {
            if(s[i]=='(')
                st.push(s[i]);
            else if(s[i]='[')
                st.push(s[i]);
            else if(s[i]=='{')
                st.push(s[i]);

            else
            {
                if(s[i]==')')
                {
                    if(st.top()=='(')
                        st.pop();
                    else
                    {
                        k=-1;
                        break;
                    }
                }
                else if(s[i]==']')
                {
                    if(st.top()=='[')
                        st.pop();
                    else
                    {
                        k=-1;
                        break;
                    }
                }
                else if(s[i]=='}')
                {
                    if(st.top()=='{')
                        st.pop();
                    else
                    {
                        k=-1;
                        break;
                    }
                }
            }
            cout<<st.top()<<endl;

        }

        cout<<st.size()<<endl;
        if(k==-1)
            cout<<"No"<<endl;
        else
            cout<<"Yes"<<endl;
    }

}
