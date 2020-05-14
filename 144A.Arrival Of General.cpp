#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,b,a,time1,time2;
    int totalTime;
    cin>>n;
    int arr[101];
    int mx=-99999;
    int mn=99999;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    for(int i=0; i<n; i++)
    {
        if(arr[i]>mx)
        {
            mx=arr[i];
            a=i;
        }
    }
    cout<<a<<endl;
    for(int i=0; i<n; i++)
    {
        if(arr[i]<=mn)
        {
            mn=arr[i];
            b=i;
        }
    }
    cout<<b<<endl;
    if(a<b)
    {
        time1=a;
        time2=n-b-1;
        totalTime=time1+time2;
    }
    else
    {
        time1=a;
        time2=n-b-1;
        totalTime=time1+time2-1;
    }
    cout<<totalTime;
}

