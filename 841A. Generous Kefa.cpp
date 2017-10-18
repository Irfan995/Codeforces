#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    int sz=0;
    cin>>n>>k;
    string  s;
    string a;
    cin>>s;
    map<char,int>mp;
    for(int i=0;i<n;i++)
    {
        mp[s[i]]++;
        if(mp[s[i]]==1)
        {
            a+=s[i];
            sz++;
        }
    }
    //cout<<sz;
    int x;
    int flag=0;
    for(int i=0;i<sz;i++)
    {
        x=mp[a[i]];
        if(x>k)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        cout<<"NO";
    }
    else
    {
        cout<<"YES";
    }
}
