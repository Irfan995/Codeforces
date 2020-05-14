#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,l;
    cin>>n>>k;
    int arr[100];
    int temp[100];
    for(int i=0; i<n; i++)
    {
        temp[i]=0;
    }
    for(int i=0;i<k;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<k;i++)
    {
        temp[arr[i]]=1;
    }
    for(int i=0;i<n;i++)
    {
        cout<<temp[i];
    }
    cout<<" "<<endl;
    int flag=0;
    for(int i=0;i<n;i++)
    {
        if(temp[i]!=1)
        {
            flag=1;
        }
    }
    if(flag==1)
    {
        cout<<"-1";
    }
    else
    {
        cout<<"1";
    }
}
