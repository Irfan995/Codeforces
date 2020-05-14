#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,l;
    cin>>n>>k;
    int temp[10];
    string s;
    //int flag=0;
    int cnt=0;
    for(int i=0; i<n; i++)
    {
        cin>>s;
        for(int j=0; j<10; j++)
        {
            temp[j]=0;
        }
        l=s.length();
        for(int j=0; j<l; j++)
        {
            temp[s[j]-48]=1;
        }
        int flag=0;
        for(int j=0; j<=k; j++)
        {
            if(temp[j]!=1)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            cnt++;
        }
    }
    cout<<cnt;
}
