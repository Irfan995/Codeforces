#include<bits/stdc++.h>
using namespace std;
int main()
{
    double n,m;
    cin>>n;
    int sum=0;
    double ans;
    for(int i=0;i<n;i++)
    {
        cin>>m;
        sum=sum+m;
    }
    ans=sum/n;
    printf("%.11lf",ans);
}
