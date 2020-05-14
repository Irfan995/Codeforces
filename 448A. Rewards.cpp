#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a1,a2,a3,b1,b2,b3;
    cin>>a1>>a2>>a3>>b1>>b2>>b3;
    int n;
    cin>>n;
    float cup,medal;
    cup=a1+a2+a3;
    medal=b1+b2+b3;
    cup=ceil(cup/5);
    medal=ceil(medal/10);
    int shelf;
    shelf=cup+medal;
    //cout<<shelf<<cup<<medal;
    if(shelf<=n)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
}
