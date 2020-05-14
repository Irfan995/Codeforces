#include<bits/stdc++.h>
using namespace std;
int main()
{
    int total, n,m, d,temp,x;
    cin>>n>>m;
    total=n;
    while(1)
    {
        x=n%m;
        n=n/m;
        total=total+n;
        n=n+x;
        if(n<m)
        {
            break;
        }
    }
    cout<<total;
}
