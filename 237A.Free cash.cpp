#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int mx;
    mx=1;
    cin>>n;
    int a[n][2];
    for(int i=0; i<n; i++)
    {
        cin>>a[i][0];
        cin>>a[i][1];
    }
    int cnt;
    for(int i=0; i<n-1; i++)
    {
        cnt=1;
        if(a[i][0]==a[i+1][0])
        {
            while(i<n-1)
            {
                if(a[i][0]==a[i+1][0] && a[i][1]==a[i+1][1])
                {
                    cnt++;
                    if(cnt>mx)
                    {
                        mx=cnt;
                    }
                }
                else
                {
                    break;
                }
                i++;
            }
        }
    }
    cout<<mx;
}
