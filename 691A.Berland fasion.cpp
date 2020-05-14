#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int cnt=0;
    int a[1000];
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    if(n==1)
    {
        for(int i=0; i<n; i++)
        {
            if(a[i]==0)
            {
                cout<<"NO";
            }
            else
            {
                cout<<"YES";
            }

        }
    }
    else
    {
        for(int i=0; i<n; i++)
        {
            if(a[i]==0)
            {
                cnt++;
            }
        }
        if(cnt>=2 || cnt==0)
        {
            cout<<"NO";
        }
        else
        {
            cout<<"YES";
        }
    }

}
