#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int line;
    line=0;
    for(int i=1;i<=n;i++)
    {
        if(i%2!=0)
        {
            for(int j=1;j<=m;j++)
            {
                cout<<"#";
            }
            cout<<endl;
        }
        else
        {
            line++;
            if(line%2!=0)
            {
                for(int j=1;j<m;j++)
                {
                    cout<<".";
                }
                cout<<"#"<<endl;
            }
            else
            {
                cout<<"#";
                for(int j=2;j<=m;j++)
                {
                    cout<<".";
                }
                cout<<endl;
            }
        }
    }
}
