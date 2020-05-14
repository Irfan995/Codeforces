#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int capital=0;
    int small,len;
    len=s.length();
    cout<<len<<endl;
    for(int i=0;i<len;i++)
    {
        if(s[i]>='A' && s[i]<='Z')
        {
            capital++;
        }
    }
    cout<<capital<<endl;
    small=len-capital;
    cout<<small<<endl;
    if(capital>small)
    {
        for(int i=0;i<len;i++)
        {
            if(s[i]>='a' && s[i]<='z')
            {
                s[i]=s[i]-32;
            }
        }
        cout<<s;
    }
    else
    {
        for(int i=0;i<len;i++)
        {
            if(s[i]>='A' && s[i]<='Z')
            {
                s[i]=s[i]+32;
            }

        }
        cout<<s;
    }
}
