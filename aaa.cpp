#include<iostream>
using namespace std;
int main()
{
    int length,digit;
    cin>>length>>digit;
    int number = 0;
    for(int i=0;i<length;i++)
    {
        number=number*10;
        number=number+1;
    }
    cout<<number*digit;
}
