#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int n;
    cin>>n;
    int x,y,z;
    double dist;
    double tm;
    double mn=INFINITY;
    for(int i=1;i<=n;i++)
    {
        cin>>x>>y>>z;
        dist=sqrt((x-a)*(x-a)+(y-b)*(y-b));
        tm=dist/z;
        if(tm<mn)
        {
            mn=tm;
        }
    }
    printf("%.20lf",mn);
}
