#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int cnt=1;
    int arr[101];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]==1 && arr[i+1]==0)
        {
            //cnt--;
        }
        else
        {
            cnt++;
        }
    }
    cout<<cnt;
}