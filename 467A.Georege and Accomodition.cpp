#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p,q,a;
    int cnt=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>p>>q;
        a=q-p;
        if(a>=2)
        {
            cnt++;
        }
    }
    cout<<cnt;
}
