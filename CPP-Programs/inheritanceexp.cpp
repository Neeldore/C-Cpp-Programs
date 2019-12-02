#include<iostream>
using namespace std;
class doit
{
    int n ;
    public:
        doit(){}
        doit(int a)
        {
            n=a;
        }
    doit operator + (doit &d1)
    {

        n=n+d1.n;
        return *this;
    }
  friend ostream &operator <<(ostream & , doit &);

};
ostream &operator <<(ostream &hmm , doit &d )
{
    hmm<<d.n;
    return hmm;
}
int main()
{
    doit a(3),b(2),c;
    c=a+b;
    cout<<c;
}
