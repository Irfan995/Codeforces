#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,result;
    int cnt1=0;
    int cnt2=0;
    cin>>n;
    char s[n];
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
    }
    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]=='A')
        {
            cnt1++;
        }
        else if(s[i]=='D')
        {
            cnt2++;
        }
    }
    if(cnt1>cnt2)
    {
        cout<<"Anton";
    }
    else if(cnt2>cnt1)
    {
        cout<<"Danik";
    }
    else if(cnt1==cnt2)
    {
        cout<<"Friendship";
    }

}
