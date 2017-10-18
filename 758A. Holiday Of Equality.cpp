#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[101];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int x;
    x=arr[n-1];
    int cnt=0;
    {
        for(int i=0; i<n; i++)
        {
            if(arr[i]<x)
            {
                cnt=cnt+x-arr[i];
            }
        }
        cout<<cnt;
    }
}

