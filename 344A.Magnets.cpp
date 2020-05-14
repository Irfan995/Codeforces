#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int a[100000];
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    int cnt=0;
    for(int i=0; i<n-1; i++)
    {
        if(a[i]!=a[i+1])
        {
            cnt++;
        }
    }
    int group;
    group=cnt+1;
    cout<<group;
}
