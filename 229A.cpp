#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[10];
    for(int i=0;i<4;i++)
    {
        cin>>a[i];
    }
    int cnt=0;
    for(int i=0;i<4;i++)
    {
        for(int j=i;j<3;j++)
        {
            if(a[i]==a[j+1] && a[i]>0)
            {
                cnt++;
                a[j+1]=-1;
            }
        }
    }
    cout<<cnt;
}
