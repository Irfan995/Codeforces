#include<iostream>
using namespace std;
int main()
{
    long long length,digit;
    cin>>length>>digit;
    long long number = 0;
    for(int i=0;i<length;i++)
    {
        number=number*10;
        number=number+1;
        cout<<number<<endl;
    }
    cout<<number*digit;
}
