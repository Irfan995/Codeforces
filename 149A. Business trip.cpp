#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k;
    cin>>k;
    int sum=0;
    int arr[12];
    for(int i=0; i<12; i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+12);
    int cnt=0;
    if(k==0)
    {
        cout<<cnt;
    }
    else
    {
        int total=0;
        for(int i=11; i>=0; i--)
        {
            total=total+arr[i];
        }
        if(total<k)
        {
            cout<<"-1";
        }
        else
        {
            for(int i=11; i>=0; i--)
            {
                sum=sum+arr[i];
                if(sum<k)
                {
                    cnt++;
                }
                else if(sum==k)
                {
                    cnt++;
                    break;
                }
                else if(sum>k)
                {
                    cnt=cnt+1;
                    break;
                }
            }
            cout<<cnt;
        }
    }
}
