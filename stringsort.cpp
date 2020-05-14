#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    char str1[50];
    char str2[50];
    cin>>str1>>str2;
 for(int i=0; ; i++)
 {
     if(str1[i]!=str2[i])
     {
         if(str1[i]>str2[i])
         {
             cout<<str2<<endl<<str1<<endl;
         }
         else
         {
             cout<<str1<<endl<<str2<<endl;
         }
         break;
     }
 }
}
