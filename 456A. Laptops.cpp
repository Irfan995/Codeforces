N#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b;
    cin>>n;
    vector<pair<int,int> >v;
    for(int i=0; i<n; i++)
    {
        cin>>a>>b;
        v.push_back(make_pair(a,b));
    }
    sort(v.begin(),v.end());
    int flag=0;
    for(int i=0; i<n-1; i++)
    {
        if(v[i].second > v[i+1].second)
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        cout<<"Poor Alex";
    }
    else
    {
        cout<<"Happy Alex";
    }
}
