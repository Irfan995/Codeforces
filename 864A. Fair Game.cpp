#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a;
    int sz=0;
    int arr[101];
    cin>>n;
    map<int,int>mp;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        mp[a]++;
        if(mp[a]==1)
        {
            arr[sz]=a;
            sz++;
        }
    }
    if(sz<2 || sz>2)
    {
        cout<<"NO";
    }
    else
    {
        if(mp[arr[0]]==mp[arr[1]])
        {
            cout<<"YES"<<endl;
            cout<<arr[0]<<" "<<arr[1];
        }
        else
        {
            cout<<"NO";
        }
    }
}
