#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    map<int,int>mp;
    int a;
    for(int i=1; i<=n; i++)
    {
        cin>>a;
        mp[i]=a;
    }
    if(mp[n]==15)
    {
        cout<<"DOWN";
    }
    else if(mp[n]==0)
    {
        cout<<"UP";
    }
    else if(mp[n]!=15 || mp[n]!=0)
    {
        if(n==1)
        {
            cout<<"-1";
        }
        else if(mp[n]-mp[n-1]<0)
        {
            cout<<"DOWN";
        }
        else if(mp[n]-mp[n-1]>0)
        {
            cout<<"UP";
        }
    }
}
