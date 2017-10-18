#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, l, c, d, p, nl, np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int toast1,toast2,toast3;
    toast1=(k*l)/nl;
    toast2=c*d;
    toast3=p/np;
    int toast;
    int mn,mn1;
    mn=min(toast1,toast2);
    mn1=min(mn,toast3);
    toast=mn1/n;
    cout<<toast;
}
