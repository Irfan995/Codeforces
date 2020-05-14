#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int a[n];
    int total=0;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        total=total+a[i];
    }
    int bus,rem;
    bus=total/m;
    rem=total%m;
    if(rem==0)
    {
        cout<<bus;
    }
    else
    {
        cout<<bus+1;
    }
}
