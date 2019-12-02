#include<iostream>
#include<cstring>
using namespace std;
class strig
{
    char str[20] ;
public :
    strig()
    {
        strcpy(str , " " );
    }
    strig(char *str1)
    {
        strcpy(str , str1);
    }
    strig(strig &d)
    {
        strcpy(str , d.str);
    }
    strig operator + (strig &s)
    {
        strcat(str , s.str);
        return *this;
    }
    friend ostream & operator <<(ostream &a , strig &b);
};
ostream & operator <<(ostream &a , strig &b)
{
    a<<b.str ;
    return a;
}
int main ()
{
    strig s1("VTU") , s2(" Belagaum ") , s3;
    cout<<"First string is "<<s1<<endl ;
    cout<<"Second string is "<<s2<<endl ;
   s3 = s1 + s2 ;
    cout<<s3 ;
    return 0 ;
}
