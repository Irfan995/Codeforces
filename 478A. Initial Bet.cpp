#include<bits/stdc++.h>
using namespace std;
int main()
{
    int c1,c2,c3,c4,c5;
    cin>>c1>>c2>>c3>>c4>>c5;
    int initial,rem,total;
    total=c1+c2+c3+c4+c5;
    initial=total/5;
    rem=total%5;
    if(total==0)
    {
        cout<<"-1";
    }
    else if(rem==0)
    {
        cout<<initial;
    }
    else if(rem!=0)
    {
        cout<<"-1";
    }
}
