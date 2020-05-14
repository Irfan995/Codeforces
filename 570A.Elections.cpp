#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int ind;
    int arr[n+1];
    int temp[n+1];
    for(int i=1;i<=n;i++)
    {
        temp[i]=0;
    }
    for(int i=1;i<=m;i++)
    {
        int mx=-INFINITY;
        for(int j=1;j<=n;j++)
        {
            cin>>arr[j];
            if(arr[j]>mx)
            {
                mx=arr[j];
                ind=j;
            }
        }
        temp[ind]++;
    }
    int mxx=-INFINITY;
    int indd;
    for(int i=1;i<=n;i++)
    {
        if(temp[i]>mxx)
        {
            mxx=temp[i];
            indd=i;
        }
    }
    cout<<indd;
}
