#include<bits/stdc++.h>
using namespace std;
int isDistinct(int n)
{
  int tape[10];
  for(int i=0;i<=9;i++)
  {
      tape[i]=0;
  }

  for(int i=0;i<4;i++)
  {
      int rem;
      rem=n%10;
      n=n/10;
      tape[rem]=1;
  }
  int cnt=0;
  for(int i=0;i<=9;i++)
  {
      if(tape[i]==1)
      {
          cnt++;
      }
  }
  int notDistinct;
  notDistinct=4-cnt;
  if(notDistinct==0)
  {
      return 1;
  }
  else
  {
      return 0;
  }
};
int main()
{
    int n;
    cin>>n;
    while(1)
    {
         n=n+1;
        int x=isDistinct(n);
        if(x==1)
        {
            cout<<n;
            break;
        }

    }

}
