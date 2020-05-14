#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[100];
    char temp[100];
    queue<string>str;
    gets(s);
    int i,j;
    for(i=0; s[i]!='\0'; i++)
    {
        j=0;
        if(s[i]>='a'&& s[i]<='z')
        {
            while(1)
            {
                if(s[i]>='a'&& s[i]<='z')
                {
                    temp[j]=s[i];
                    j++;
                }
                else
                {
                    break;
                }
                i++;
            }
            temp[j]='\0';
            str.push(temp);
        }
    }
    while(!str.empty())
    {
        cout<<str.front()<<endl;
        str.pop();
    }
}
