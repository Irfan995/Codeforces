#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,h,a;
    cin>>n>>h;
    int cnt=0;
    for(int i=1;i<=n;i++)
    {
        cin>>a;
        if(a<=h)
        {
            cnt=cnt+1;
        }
        else
        {
            cnt=cnt+2;
        }
    }
    cout<<cnt;
}
