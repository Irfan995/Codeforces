#include<iostream>
using namespace std;
class samp{
    int a,b;
public:
    samp(int n,int m)
    {
        a=n;
        b=m;
    }
    int geta()
    {
        return a;
    }
    int getb()
    {
        return b;
    }
};
int main()
{
    int i;
    samp ob[4]={samp(1,2),samp(3,4),samp(5,6),samp(7,8)};
}
samp *p;
p=ob
for(i=0;i<4;i++)
{
    cout<<p->geta()<< '' << p->getb()<<endl;
}
