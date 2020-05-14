#include<iostream>
using namespace std;
class samp
{
private:
    int a,b;
public:
    samp(int n)
    {
        a=n;
    }
    samp(int m)
    {
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
    samp ob1[4]= {1,3,5,7};
    samp ob2[4]= {2,4,6,8};

    /*samp p,q;
    p=ob;
    q=ob;*/
    for(i=0; i<4; i++)
    {
        cout<<ob1.geta()<< ob2.getb()<<endl;
        //p++;
    }

}
