#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    int a;
    cin>>x;
    if(x>=5)
    {
        a=x/5;
        x=x%5;
        if(x==1 || x==2 || x==3 || x==4)
        {
            a=a+1;
        }
    }
    else if(x==1 || x==2 || x== 3 || x==4 || x== 5)
    {
        a=1;
    }
    cout<<a;
}
