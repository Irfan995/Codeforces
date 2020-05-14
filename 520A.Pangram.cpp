#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int a;
    cin>>n;
    char s[n];
    cin>>s;
    for(int i=0; s[i]!='\0'; i++)
    {
        if(s[i]>='A' && s[i]<='Z')
        {
            s[i]=s[i]+32;
        }
    }
    a=strlen(s);
    int tape[26];
    if(a>=26)
    {
        for(int i=0; i<26; i++)
        {
            tape[i]=0;
        }
        for(int i=0; i<a; i++)
        {
            tape[s[i]-97]=1;
        }
        int flag=0;
        for(int i=0; i<26; i++)
        {
            if(tape[i]==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
        {
            cout<<"NO";
        }
        else
        {
            cout<<"YES";
        }

    }
    else
    {
        cout<<"NO";
    }
}
