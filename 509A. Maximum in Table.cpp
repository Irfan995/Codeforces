#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n][n];
    for(int i=0; i<n; i++)
    {
        arr[0][i]=1;
        arr[i][0]=1;
    }
    if(n==1)
    {
        cout<<"1";
    }
    else
    {
        int mx=-INFINITY;
        for(int i=1; i<n; i++)
        {
            for(int j=1; j<n; j++)
            {
                arr[i][j]=arr[i-1][j]+arr[i][j-1];
                if(arr[i][j]>mx)
                {
                    mx=arr[i][j];
                }
            }
        }
        cout<<mx;
    }
}
