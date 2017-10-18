#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b;
    cin>>n;
    int ans=0;
    int price = INFINITY;
    vector<pair<int,int> >v;
    for(int i=0;i<n;i++)
    {
        cin>>a>>b;
        v.push_back(make_pair(a,b));
    }
    for(int i=0;i<n;i++)
    {
        price = min(price,v[i].second);
        ans = ans + price*v[i].first;
    }
    cout<<ans;
}
