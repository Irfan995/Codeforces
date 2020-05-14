#include<iostream>
using namespace std;
class myclass{
    int a,b;
public:
    myclass(int x,int y)
    {
        cout<< "In constructor\n";
        a=x;
        b=y;
    }
    void show()
    {
        cout<< a << " "<< b << "\n";
    }
};
int main()
{
    myclass ob(4,7);
    //ob.myclass();
    ob.show();
}
