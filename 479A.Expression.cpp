#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,ans;
    int s1,s2,s3,s4;
    cin>>a>>b>>c;
    s1=a+b+c;
    s1=max (s1,a*(b+c));
    s1=max(s1,(a*b*c));
    s1=max(s1,(a+b)*c);
    cout<<s1;
}
