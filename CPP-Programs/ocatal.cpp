#include<iostream>
#include<cstdlib>
#include<cmath>
using namespace std ;
class octal
{
    int octalnum ;
public:

    octal()
    {

    }
    octal(int a)
    {
        octalnum = dectooct(a);
    }
    int  operator +(int b)
    {
        int a = dectooct(b);
        return (octalnum + a);
    }
    int dectooct(int c);
    friend ostream & operator <<(ostream & , octal &);
};
int  octal :: dectooct(int c)
{
    int rem = 0 , m = 0 , i=0;
    while(c!=0)
    {
        rem= c%8;
        m = m + rem*pow(10, i);
        c = c/10;
        i++;
    }
    return m ;
}
ostream & operator <<(ostream &print , octal &d)
{
    print<<d.octalnum;
    return print ;
}
int main()
{
    int x ,    d;


        cout<<"Enter the value \n";
        cin>>x ;
        octal e = x;
        cout<<e<<endl ;
        d = e + 10;
        cout<<d<<endl;
     ;

    return 0;
}
