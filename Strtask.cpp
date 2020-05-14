#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
	int i,j=0,n,a;
	char s[100];
	char s1[100];
	char s2[100];
	char s3[100];
	scanf("%s",s);
	n=strlen(s);
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='y' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U' || s[i]=='Y')
		{
			s[i]=' ';
		}
		else
		{
			s1[j++]=s[i];
		}
	}s1[j]='\0';
	for(i=0;s1[i]!='\0';i++)
	{
		if(s1[i]>=65 && s1[i]<=90)
		{
			s2[i]=s1[i]+32;
		}
		else
		{
			s2[i]=s1[i];
		}
	}s2[i]='\0';
	a=strlen(s2);
	for(i=0;i<a;i++)
	{
		s3[2*i]='.';
		s3[2*i+1]=s2[i];
	}s3[2*i]='\0';
	printf("%s",s3);

	return 0;
}
