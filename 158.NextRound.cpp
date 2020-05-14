#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    int a[50];
    int cnt=0;
    //cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]>=a[k-1] && a[i]>0)
        {
            cnt++;
        }
    }
    cout<<cnt;
}
