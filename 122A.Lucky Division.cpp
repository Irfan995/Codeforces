#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[14]= {4,7,44,47,74,77,444,447,474,477,744,747,774,777};
    int n,ans;
    cin>>n;
    int flag=0;
    for(int i=0; i<14; i++)
    {
        ans=n%a[i];
        //cout<<ans<<endl;
        if(ans!=0)
        {
            flag=1;
            //break;
        }
        else
        {
            flag=0;
            break;
        }
    }
    if(flag==0)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
}
