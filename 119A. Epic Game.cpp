#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
    if(b%a==0)
    {
        return a;
    }
    else
    {
        return(b%a, a);
    }
}
int main()
{
    int n,aa,bb;
    int temp;
    cin>>aa>>bb>>n;
    int cnt=0;
    //cout<<aa<<" "<<bb;
    while(1)
    {
         temp=aa;
        aa=bb;
        bb= temp;
        if(n<gcd(bb,n))
        {
            break;
        }
        else
        {
            n=n-gcd(bb,n);
            cnt++;
        }
    }
    if(cnt%2==0)
    {
        cout<<"1";
    }
    else
    {
        cout<<"0";
    }
}
