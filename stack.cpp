#include<iostream>
#define size 10
using namespace std;
class stack
{
    char stck[size];
    int tos;
public:
    stack()
    {
        cout<<"Constructing a stack\n";
        tos=0;
    }
    void push(char ch)
    {
        if(tos==size)
        {
            cout<<"Stack is full\n";
        }
        stck[tos]=ch;
        tos++;
    }
    char pop()
    {
        if(tos==0)
        {
            cout<<"Stack is empty\n";
                return 0;
        }
        tos--;
        return stck[tos];
    }
};
int main()
{
    stack s1,s2;
    int i;
    s1.push('a');
    s2.push('x');
    s1.push('b');
    s2.push('y');
    s1.push('c');
    s2.push('z');
    for(i=0; i<3; i++)
        cout<<"POP s1: " <<s1.pop() << "\n";
    for(i=0; i<3; i++)
        cout<<"POP s2: " <<s2.pop() << "\n";
}
