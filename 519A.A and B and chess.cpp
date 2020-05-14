#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int cnt1,cnt2;
    cnt1=0;
    cnt2=0;
    for(int i=0; i<8; i++)
    {
        cin>>s;
        for(int j=0; s[j]!='\0'; j++)
        {
            if(s[j]>='A'&&s[j]<='Z')
            {
                if(s[j]=='Q')
                {
                    cnt1=cnt1+9;
                }
                else if(s[j]=='R')
                {
                    cnt1=cnt1+5;
                }
                else if(s[j]=='B')
                {
                    cnt1=cnt1+3;
                }
                else if(s[j]=='N')
                {
                    cnt1=cnt1+3;
                }
                else if(s[j]=='K')
                {
                    cnt1=cnt1+0;
                }
                else if(s[j]=='P')
                {
                    cnt1=cnt1+1;
                }
            }
            else if(s[j]>='a'&&s[j]<='z')
            {
                if(s[j]=='q')
                {
                    cnt2=cnt2+9;
                }
                else if(s[j]=='r')
                {
                    cnt2=cnt2+5;
                }
                else if(s[j]=='b')
                {
                    cnt2=cnt2+3;
                }
                else if(s[j]=='n')
                {
                    cnt2=cnt2+3;
                }
                else if(s[j]=='k')
                {
                    cnt2=cnt2+0;
                }
                else if(s[j]=='p')
                {
                    cnt2=cnt2+1;
                }
            }
        }
    }
   //cout<<cnt1<<endl<<cnt2;
    int mx;
    if(cnt1>cnt2)
    {
        cout<<"White";
    }
    else if(cnt1==cnt2)
    {
        cout<<"Draw";
    }
    else
    {
        cout<<"Black";
    }
}
