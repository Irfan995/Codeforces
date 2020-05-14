#include<bits/stdc++.h>
using namespace std;
int main()
{
    int d1,d2,d3;
    cin>>d1>>d2>>d3;
    int total1,total2,total3,total4;
    total1=d1+d2+d3;
    total2=(d1+d1)+(d2+d2);
    total3=d1+(d3+d3)+d1;
    total4=d2+(d3+d3)+d2;
    int dist;
    dist=min(total1,total2);
    dist=min(dist,total3);
    dist=min(dist,total4);
    cout<<dist;
}
