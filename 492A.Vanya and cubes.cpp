#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i;
    int sum;
    int total=0;
    int cnt=0;
    for(i=1;i<=n;i++)
    {
        int a=i+1;
        sum=a*i/2;
        total=total+sum;
        if(total<=n)
        {
            cnt++;
        }
        else
        {
            break;
        }
    }
    cout<<cnt;
}
