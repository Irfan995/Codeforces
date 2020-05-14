#include<iostream>
using namespace std;
int main()
{
    int *p;
    p=new int;
    if(!p)
    {
        cout<<"Allocation error"<<endl;
        return 1;
    }
    *p=1000;
    cout<<"Here is integer at p:"<<*p<<endl;
    delete p;
    return 0;
}
