#include<bits/stdc++.h>
#define ll long long int
using namespace std;
bool linear_search(int arr[],int x,int index,int n)
{
    if(index>=n)
        return 0;
    if(arr[index]==x)
        return 1;
    return linear_search(arr,x,index+1,n);
}
int main()
{

    int n,x;
    cin>>n>>x;
    int arr[n+1];
    for(int i=0;i<n;i++)
        cin>>arr[i];
       bool d= linear_search(arr,x,0,n);
       if(d==1)
        cout<<"number of "<<x<<" is found on the array"<<endl;
       else
        cout<<"number of "<<x<<" is not found on the array"<<endl;
}
