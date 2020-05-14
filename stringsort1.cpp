#include<bits/stdc++.h>
//#include<iotsream>
//#include<stdio.h>
using namespace std;
int main()
{
    char str[2][50];
    char temp[50];
    cin>>str[0]>>str[1];
    for(int i=0; ; i++)
    {
        if(str[0][i]!=str[1][i])
        {
            if(str[0][i]>str[1][i])
            {
                strcpy(temp,str[1]);
                strcpy(str[1],str[0]);
                strcpy(str[0],temp);

            }
             cout<<str[0]<<endl<<str[1]<<endl;
            break;
        }
    }
}
