#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a1[101];
    char a2[101];
    char temp[101];
    cin>>a1>>a2;
    int n,i,b;
    n=strlen(a1);
    //cout<<n<<endl;
    for( i=0; i<n; i++)
    {
         b=a1[i]-a2[i];
        //cout<<b<<"..b"<<endl;
        if(b==0)
        {
            temp[i]='0';
            //cout<<temp<<"..t"<<endl;
        }
        else
        {
            temp[i]='1';
            //cout<<temp<<"..t"<<endl;
        }
    }temp[i]='\0';
    cout<<temp;
}
