#include<iostream>
#include<cstring>
using namespace std;
class STRING
{
    char a[20];char aa[20];
    public:
    STRING(){
        strcpy(a , " ");
    }
    STRING(char *b)
    {
        strcpy(a , b);
    }
    STRING operator +(STRING c)
    {
        strcat(a , c.a);
        return a;
    }
    friend ostream & operator <<(ostream  &dude , STRING &s);
};
ostream & operator <<(ostream &dude ,   STRING & s)
{
    dude<<s.a;
    return dude;
}
int  main()
{
    STRING s1("VTU"),s2("Bedahaum"),s3;
    cout<<s1<<endl;
    cout<<s2<<endl;
    s3=s1+s2;
    cout<<s3<<endl;
    return 0;
}
