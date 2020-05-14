#include<bits/stdc++.h>
using namespace std;
int main()
{
double m;
double n,l;
scanf("%lf", &n);
l=n/2;
m=floor(l);

if(l==m)
    printf("%0.0lf", m);
else
{
    m= (-(m+1));
    printf("%0.0lf", m);
}
//getch();
return 0;
}
