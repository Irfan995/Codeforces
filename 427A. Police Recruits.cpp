#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[100000];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int crime;
    int police=0;
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        crime=0;
        if(a[i]==-1)
        {
            crime++;
        }
        else
        {
            police=police+a[i];
        }
        int commit;
        commit=police-crime;
        if(commit>=0)
        {
            police=commit;
        }
        else
        {
            cnt++;
        }
    }cout<<cnt;
}
