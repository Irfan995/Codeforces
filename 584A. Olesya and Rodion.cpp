#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,t;
    cin>>n>>t;
    long long number=0;
    for(int i=0; i<n; i++)
    {
        number=number*10;
        number=number+1;
    }
    cout<<number*t;
}
