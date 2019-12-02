#include<iostream>
using namespace std ;
class time
{
    public :int h , m , s;
public :
    virtual void show()
    {

    }
};
class hour : public time
{

public :
    hour(int a)
    {
        h = a;
    }
    void show()
    {
        cout<<h<<"/";
    }
};
class minute : public time
{
public:
    minute(int b)
    {
        m = b;
    }
    void show()
    {
        cout<<m<<"/";
    }
} ;
class second : public time
{
public :
    second (int b)
    {
        s = b;
    }
    void show()
    {
        cout<<s<<"\n";
    }
};
int main()
{
    time *p ,a ;
    hour b(10) ;
    minute d(15);
    second c(59);
    p = &b ;
    p->show();
    p = &d;
    p->show();
    p = &c;
    p->show();
}
