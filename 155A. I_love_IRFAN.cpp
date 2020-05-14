#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,mx,mn;
    cin>>n;
    int arr[10001];
    cin>>arr[0];
    mx=arr[0];
    mn=arr[0];
    int cnt=0;
    for(int i=1;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]!=arr[i-1])
        {
            if(arr[i]<mn)
            {
                mn=arr[i];
                cnt++;
            }
            else if(arr[i]>mx)
            {
                mx=arr[i];
                cnt++;
            }
        }
    }
    cout<<cnt;
}
