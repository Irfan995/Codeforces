#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,c;
    int cnt1=0;
    int cnt2=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>m>>c;
        if(m>c)
        {
            cnt1++;
        }
        else if(m<c)
        {
            cnt2++;
        }
        else if(m==c)
        {
            cnt1--;
            cnt2--;
        }
    }
    if(cnt1>cnt2)
    {
        cout<<"Mishka";
    }
    else if(cnt1==cnt2)
    {
        cout<<"Friendship is magic!^^";
    }
    else if(cnt1<cnt2)
    {
        cout<<"Chris";
    }
}
