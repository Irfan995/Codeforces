#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[1001];
    gets(s);
    int cnt=0;
    int j;
    for(int i=0; s[i]!='\0'; i++)
    {
        for(int j=i; s[j]!='\0'; j++)
        {
            if(s[i]==s[j+1])
            {
                s[j+1]='#';
            }
        }
    }
    //cout<<s;
    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]>='a' && s[i]<='z')
        {
            cnt++;
        }
    }
    cout<<cnt;
}
