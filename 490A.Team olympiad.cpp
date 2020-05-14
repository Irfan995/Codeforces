#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a1[5000];
    int a2[5000];
    int a3[5000];
    int j1=0;
    int j2=0;
    int j3=0;
    for(int i=1;i<=n;i++)
    {
        int a;
        cin>>a;
        if(a==1)
        {
            a1[j1]=i;
            j1++;
        }
        else if(a==2)
        {
            a2[j2]=i;
            j2++;
        }
        else if(a==3)
        {
            a3[j3]=i;
            j3++;
        }
    }
    int temp,team;
    temp=min(j1,j2);
    team=min(temp,j3);
    cout<<team<<endl;
    for(int i=0;i<team;i++)
    {
        cout<<a1[i]<<" "<<a2[i]<<" "<<a3[i]<<endl;
    }
}
