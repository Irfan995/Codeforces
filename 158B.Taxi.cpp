#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[100000];
    cin>>n;
    int c,b;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    //cout<<sum<<endl;
    c=sum/4;
    if(sum%4==0)
    {
        cout<<c;
    }
    else
    {
        b=c+1;
        cout<<b;
    }
}
