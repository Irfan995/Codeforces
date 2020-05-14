#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[3];
    int x,y,sum;
    for(int i=0;i<3;i++)
    {
        cin>>a[i];
    }
    sort(a,a+3);
    x=a[1]-a[0];
    y=a[2]-a[1];
    sum=x+y;
    cout<<sum;
}
