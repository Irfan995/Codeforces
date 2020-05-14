#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    int a[1000];
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    int cnt = 0;
    int sum = 0;
    for(int i=n-1;i>=0;i--)
    {
        sum=sum+a[i];
        cnt++;
        if(sum>=m)
        {
            break;
        }
    }
    cout<<cnt;
}
