#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x1,x2,y1,y2;
    int x3,x4,y3,y4;
    cin>>x1>>y1>>x2>>y2;
    int a,b,c;

    if(x1==x2)
    {
        a=abs(y1-y2);
        x3=x1+a;
        x4=x2+a;
        y3=y1;
        y4=y2;
        cout<<x3<<" "<<y3<<" "<<x4<<" "<<y4;
    }
    else if(y1==y2)
    {
        a=abs(x1-x2);
        y3=y1+a;
        y4=y2+a;
        x3=x1;
        x4=x2;
        cout<<x3<<" "<<y3<<" "<<x4<<" "<<y4;
    }
    else
    {
        a=abs(x1-x2);
        b=abs(y1-y2);
        if(a!=b)
        {
            cout<<"-1";
        }
        else
        {
            if(x2<x1)
            {
                x3=(x1-a);
                x4=x1;
                y3=y1;
                y4=y2;
                cout<<x3<<" "<<y3<<" "<<x4<<" "<<y4;
            }
            else
            {
                x3=(x2-a);
                x4=x2;
                y3=y2;
                y4=y1;
                cout<<x3<<" "<<y3<<" "<<x4<<" "<<y4;
            }
        }
    }

}
