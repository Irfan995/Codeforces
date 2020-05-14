#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,last,in;
    cin>>n>>m;
    int a[n];
    int index[100+1];
    queue<int>q;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        index[a[i]]=i;
        q.push(a[i]);
    }
    while(1)
    {
        if(q.empty())
        {
            break;
        }
        else
        {
            last=q.front();
            in=index[last];
            if(last>m)
            {
                q.push(last-m);
                index[last-m]=in;
            }
            q.pop();
        }

    }
    cout<<in+1<<endl;
}
