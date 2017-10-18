#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int sum=0;
    cin>>n;
    string s;
    map<string,int>mp;
    mp["Tetrahedron"]=4;
    mp["Cube"]=6;
    mp["Octahedron"]=8;
    mp["Dodecahedron"]=12;
    mp["Icosahedron"]=20;
    for(int i=0; i<n; i++)
    {
        cin>>s;
        sum=sum+mp[s];
    }
    cout<<sum;
}
