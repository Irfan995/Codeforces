#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num,diff;
    int cnt=0;
    int a[10001];
    cin>>num>>diff;
    for(int i=0;i<num;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<num;i++)
    {
        if(a[i+1]-a[i]<=diff)
        {
            cnt++;
        }
        else
        {
            cnt=0;
        }
    }
    cout<<cnt;
}
