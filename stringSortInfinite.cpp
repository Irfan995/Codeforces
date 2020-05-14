#include<bits/stdc++.h>
using namespace std;
char s(char s1[],char s2[])
{
 for(int i=0; ; i++)
 {
     if(s1[i]!=s2[i])
     {
         if(s1[i]>s2[i])
         {
             return 1;
         }
         else
         {
             return 2;
         }
     }
 }
}
int main()
{
     int n;
     cin>>n;
    char str[n][50];
    for(int i=0; i<n; i++)
    {
        cin>>str[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(s(str[j],str[j+1])==1)
            {
                char temp[50];
                strcpy(temp,str[j+1]);
                strcpy(str[j+1],str[j]);
                strcpy(str[j],temp);
            }
        }
    }
    for(int i=0; i<n; i++)
    {
        cout<<str[i]<<" ";
    }

}
