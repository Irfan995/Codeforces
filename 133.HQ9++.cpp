#include<bits/stdc++.h>
using namespace std;
int main()
{
    char p[101];
    cin>>p;
    int flag=0;
    for(int i=0; p[i]!='\0';i++)
    {
        if( p[i]=='H' || p[i]=='Q' || p[i]=='9')
        {
            flag=1;
        }
    }
    if(flag==1)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
}
