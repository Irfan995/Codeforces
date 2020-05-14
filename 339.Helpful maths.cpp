#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[100];
    cin>>s;
    char temp[100];
    int j=0;
    for(int i=0; s[i]!='\0'; i++)
    {
        if(s[i]!='+')
        {
            temp[j]=s[i];
            j++;
        }
    }
    sort(temp,temp+j);
    for(int i=0; i<j; i++)
    {
        if(i<(j-1))
        {
            cout<<temp[i];
            cout<<"+";
        }
        else
            cout<<temp[i];

    }
}
