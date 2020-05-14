#include<bits/stdc++.h>
using namespace std;
int main()
{
    char p;
    int n,m;
    int color=0;
    char s;
    char temp[10001];
    cin>>n>>m;
    int a;
    a=0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>>s;
            {
                if(s!='C' && s!= 'M' && s!= 'Y')
                {
                    temp[a]='0';
                    a++;
                }
                else
                {
                    temp[a]='1';
                    a++;
                }
            }
        }
    }
    temp[a]='\0';
    //cout<<temp<<endl;
    int flag=0;
    for(int i=0; i<temp[i]!='\0'; i++)
    {
        if(temp[i]=='1')
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        cout<<"#Color";
    }
    else
    {
        cout<<"#Black&White";
    }
}

