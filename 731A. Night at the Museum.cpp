#include<bits/stdc++.h>
using namespace std;
int main()
{
    int mn;
    string s;
    cin>>s;
    int diff1,diff2,diff3,diff4;
    diff1=abs('a'-s[0]);
    diff2=abs(26-diff1);
    mn=min(diff1,diff2);
    int mn1=0;
    for(int i=0;i<s.length()-1;i++)
    {
        int mnn;
        diff3=abs(s[i]-s[i+1]);
        diff4=abs(26-diff3);
        mnn=min(diff3,diff4);
        mn1=mn1+mnn;
    }
    int result;
    result=mn+mn1;
    cout<<result;
}
