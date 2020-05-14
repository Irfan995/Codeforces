#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,differentSocksDay,sameSocks,sameSocksDay;
    cin>>a>>b;
    if(a>b)
    {
        differentSocksDay=b;
        sameSocks=a-differentSocksDay;
    }
    else
    {
        differentSocksDay=a;
        sameSocks=b-differentSocksDay;
    }
    sameSocksDay=sameSocks/2;
    cout<<differentSocksDay<<" "<<sameSocksDay;
}
