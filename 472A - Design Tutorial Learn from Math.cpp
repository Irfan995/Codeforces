#include<iostream>
#include<stdio.h>
using namespace std;
int Prime(int n)
{
	int i;
	for(i=2;i*i<=n;i++)
	{
		if(n%i==0)
			return 0;
	}
	return 1;
}
int main()
{
	int i,j,n,m;
	cin>>n;
	{
		for(i=4,j=n-4;i<n;i++,j--)
		{
			if(Prime(i)==0 && Prime(j)==0)
			{
				cout<<i<<" "<<j<<endl;
				break;
			}
		}
	}
	return 0;
}
