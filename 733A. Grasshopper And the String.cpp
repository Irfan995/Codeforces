#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    vector<int>v;
    int cnt=0;
    int a;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]!='A' && s[i]!='E' && s[i]!='I' && s[i]!='O' && s[i]!='U' && s[i]!='Y')
        {
            cnt++;
        }
        else
        {
           v.push_back(cnt);
            cnt=0;
        }
    }
    v.push_back(cnt);
    sort(v.begin(),v.end());
    int x;
    x=v[v.size()-1];
    cout<<x+1<<endl;
}
