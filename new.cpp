/*#include<iostream>
#include<string>
using namespace std;
class person
{
private:
    string name;
    int age;
    int id;
public:
     /*string name;
    int age;
    int id;
    void setName(string iname)
    {
        name=iname;
    }
    void setAge(int iage)
    {
        age=iage;
    }

    void setId(int iid)
    {
        id=iid;
    }
    void introduce()
    {
        cout<<"hi i am "<<name<<" and i am "<< age<<" years old"<<endl<<"my id is "<<id<<endl;
    }
};
/*class student : public person{
public:
    int id;
    void setId(int iid)
    {
        id=iid;
    }
    void introduce()
    {
        cout<<"hi i am "<<name<<" and i am "<< age<<" years old"<<endl<<"my id is "<<id<<endl;
    }

};
int main()
{
    person anil;
    anil.setName("irfan");
    anil.setAge(18);
    anil.setId(1412015);
    anil.introduce();
}
*/
/*#include<iostream>
#include<string>
using namespace std;
class samp{
    int i;
public:
    samp(int n)
    {
        i=n;
    }
    int geti()
    {
        return i;
    }
};
int sqrit(samp o)
{
    return o.geti()*o.geti();
}
int main()
{
    samp a(10),b(2);
    cout<<sqrit(a)<<endl;
    cout<<sqrit(b)<<endl;
}*/
/*#include<iostream>
using namespace std;
class samp{
    int a;
public:
    void seta(int n)
    {
        a=n;
    }
    int geta()
    {
        return a;
    }
};
int main()
{
    samp ob[4];
    int i;
    for(i=0;i<4;i++)
        ob[i].seta(i);
    for(i=0;i<4;i++)
        cout<<ob[i].geta()<<endl;
}*/
/*#include<iostream>
using namespace std;
class samp{
    int a;
public:
    samp(int n)
    {
        a=n;
    }
    int geta()
    {
        return a;
    }
};
int main()
{
    samp ob[4]={1,2,3,4};
    int i;
    for(i=0;i<4;i++)
        cout<<ob[i].geta()<<endl;
}*/
/*#include<iostream>
#include<cstring>
using namespace std;
class inventory{
char item[20];
double cost;
int onhand;
public:
    inventory(char *i,double c,int o)
    {
        strcpy(item,i);
        cost=c;
        onhand=o;
    }
    void show()
    {
        cout<<item<<": $"<<cost<<"  On hand:"<<onhand<<endl;
    }
};
int main()
{
    inventory ob("wrench",4.95,4);
    ob.show();
}
*/
#include<iostream>
using namespace std;
class myclass{
    int a,b;
public:
    myclass(int n,int m)
    {
        a=n;
        b=m;
    }
    int add()
    {
        return a+b;
    }
    void show(){
        int t;
        t=add();
        cout<<t<<endl;
    }
};
int main()
{
    myclass ob(10,14);
    ob.show();
}
