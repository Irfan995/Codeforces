#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2;
    int n;
    cin>>n;
    cin>>s1>>s2;
    int a,b,mn;

    int total=0;
    for(int i=0;s1[i]!='\0';i++)
    {
        a=abs(s1[i]-s2[i]);
        b=abs(10-abs(s1[i]-s2[i]));
        if(a<b)
        {
            mn=a;
        }
        else
        {
            mn=b;
        }
        total=total+mn;
    }
    cout<<total;
}
