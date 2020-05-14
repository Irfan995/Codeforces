#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,b,c,total;
    int rem;
    cin>>n>>b;
    total=n;
    while(1)
    {
        rem=n%b;
        n=n/b;
        total=total+n;
        n=n+rem;
        if(n<b)
        {
            break;
        }
    }
    cout<<total;
}
