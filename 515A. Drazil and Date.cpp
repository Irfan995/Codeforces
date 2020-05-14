#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,s;
    cin>>a>>b>>s;
    int dist;
    dist=abs(a)+abs(b);
    if(dist==s)
    {
        cout<<"YES";
    }
    else if(a==0 && b==0)
    {
        int c;
        c=s-abs(a)+abs(b);
        if(c%2==0)
        {
            cout<<"YES";
        }
        else
        {
            cout<<"NO";
        }
    }
    else if(dist>s)
    {
        cout<<"NO";
    }
    else if(dist<s)
    {
        int c;
        c=s-abs(a)+abs(b);
        if(c%2==0)
        {
            cout<<"YES";
        }
        else
        {
            cout<<"NO";
        }
    }
}
