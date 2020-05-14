/*#include<iostream>
#include<stdio.h>
using namespace std;


class indexP
{
public:
    int num;
    int ind;

};


int main()
{
    indexP obj[50],temp;
    int length,i,j;
    scanf("%d",&length);
    for( i=0; i<length; i++)
    {
        cin>>obj[i].num;
        obj[i].ind = i;
    }

    for( i=0; i<length; i++)
    {
        for(j=0; j<length-i-1; j++)
        {
            if(obj[j].num>obj[j+1].num)
            {
                temp=obj[j];
                obj[j]=obj[j+1];
                obj[j+1]=temp;
            }
        }
    }
    for(i=0; i<length; i++)
    {
       cout<<obj[i].num<<" "<<obj[i].ind<<endl;
    }

}
*/
#include<iostream>
#include<stdio.h>
using namespace std;
class indexP
{
private:
    int num;
    int ind;
public:
    indexP()
    {

    }
    indexP(int a)
    {
        num=a;
        ind= 1000;
    }
    indexP(int a,int b)
    {
        num=a;
        ind=b;
    }

    void sett(int a,int b)
    {
        num=a;
        ind=b;
    }
    int getnum()
    {
        return num;
    }
    int getind()
    {
        return ind;
    }

};


int main()
{
    indexP obj[50],temp(2,5),fahim(5);
    cout<<temp.getind()<<temp.getnum()<<fahim.getind()<<fahim.getnum();
    int length,i,j;
    scanf("%d",&length);
    for( i=0; i<length; i++)
    {
        int x;
        cin>>x;
        obj[i].sett(x,i);

    }

    for( i=0; i<length; i++)
    {
        for(j=0; j<length-i-1; j++)
        {
            if(obj[j].getnum()>obj[j+1].getnum())
            {
                temp=obj[j];
                obj[j]=obj[j+1];
                obj[j+1]=temp;

            }//arr2[j]=arr1[j+1];
        }
    }
    for(i=0; i<length; i++)
    {
       cout<<obj[i].getnum()<<" "<<obj[i].getind()<<endl;
    }

}
