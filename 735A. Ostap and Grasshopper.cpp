#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    int grass,target,gap,gap1;
    int obs[100];
    int j=1;
    for(int i=0; s[i]!='\0'; i++)
    {
        if(s[i]=='G')
        {
            grass=i;
        }
        else if(s[i]=='T')
        {
            target=i;
        }
    }
    int flag=0;
    gap=abs(grass-target);
    if(gap%k!=0)
    {
        cout<<"NO";
    }
    else
    {
        if(grass>target)
        {
            for(int i=grass;i>=target; )
            {

                if(s[i]=='#')
                {
                    flag=1;
                    break;
                }
                i-=k;
            }
            if(flag==1)
            {
                cout<<"NO"<<endl;
            }
            else
            {
                cout<<"YES"<<endl;
            }
        }
        else
        {
            for(int i=grass;i<=target; )
            {

                if(s[i]=='#')
                {
                    flag=1;
                    break;
                }
                i+=k;
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
    }
}
