#include<bits/stdc++.h>
using namespace  std;
int main()
{
    int mx=0;
    int n,k;
    cin>>n>>k;
    int arr[n];
    int totalProfit=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++)
    {
        totalProfit=arr[i]-arr[i+1]-k;
        //cout<<totalProfit<<endl;
        if(totalProfit>mx)
        {
            mx=totalProfit;
        }
    }

    cout<<mx;
}
