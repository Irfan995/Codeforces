#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[200];
    cin>>s;
    int l;
    l=strlen(s);
    int i;
    for(i=0; i<=l-2; i++)
    {
        if(s[i]=='W')
        {
            if(s[i+1]=='U')
            {
                if(s[i+2]=='B')
                {
                    s[i]='#';
                    s[i+1]='#';
                    s[i+2]='#';
                }
            }
        }
    }
    //cout<<s<<endl;
    char temp[200];
    int j;
    j=0;
    for(i=0; s[i]!='\0'; i++)
    {
        if(s[i]!='#')
        {
            while(s[i]!='#')
            {
                cout<<s[i];
                i++;
                if(i>=strlen(s))
                {
                    break;
                }
            }
            cout<<" ";
        }
        if(i>=strlen(s))
        {
            break;
        }
    }
}
