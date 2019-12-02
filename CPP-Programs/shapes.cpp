#include<iostream>
#define pi 3.14
using namespace std ;
class shapes
{
public :float  l , b , r , h , ba , ar  ;
    virtual void get()=0;
    virtual void area()=0;
    virtual void show()=0;
};

class circle  : public shapes
{
    public :
        void get()
        {
            cout<<"Enter radius \n" ;
            cin>>r ;
        }
    void area()
    {
        ar = pi*r*r;
    }
    void show()
    {
        cout<<ar<<endl;
    }
};
class rectangle  : public shapes
{
public:
    void get()
    {
       cout<<"Enter length And breadth \n ";
       cin>>l>>b;
    }
    void area()
    {
        ar = l*b;
    }
    void show()
    {
        cout<<ar<<"\n";
    }
} ;
class triangle : public shapes
{
public :
    void get()
    {
        cout<<"Enter height and base \n";
        cin>>h>>ba;
    }
    void area()
    {
        ar = 0.5*ba*h;
    }
    void show()
    {
        cout<<ar<<"\n";
    }
};
int main()
{
    shapes *p ;
    circle b;
    p = &b ;
    p->get();
    p->area();
    p->show();
    rectangle d;
    p = &d;
    p->get();
    p->area();
    p->show();
    triangle c;
    p = &c;
    p->get();
    p->area();
    p->show();
    return 0;
}
