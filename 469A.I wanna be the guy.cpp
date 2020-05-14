#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p,q;
    cin>>n>>p;
    int a1[101],a2[101],tape[101];
    for(int i=1; i<=p; i++)
    {
        cin>>a1[i];
    }
    cin>>q;
    for(int i=1;i<=q;i++)
    {
        cin>>a2[i];
    }
    for(int i=1; i<=n; i++)
    {
        tape[i]=0;
    }
    for(int i=1; i<=p; i++)
    {
        tape[a1[i]]=1;
    }
    for(int i=1;i<=q;i++)
    {
        tape[a2[i]]=1;
    }
    /*for(int i=1;i<=n;i++)
    {
        cout<<tape[i];
    }*/
    int flag=0;
    for(int i=1; i<=n; i++)
    {
        if(tape[i]==0)
        {
            flag=1;
        }
    }
    if(flag==0)
    {
        cout<<"I become the guy.";
    }
    else if(flag==1)
    {
        cout<<"Oh, my keyboard!";
    }

}
