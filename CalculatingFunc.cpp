#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
int main()
{
	double n,m,l;
	cin>>n;
	m=n/2;
	l=floor(m);
	if(m==l)
	{
		cout<<l;
	}
	else
	{
		l=-(l+1);
		cout<<l;
	}
	return 0;
}
