#include<iostream>
using namespace std;
int counter(char [] , int );
class holes{
public:
    char s[100];
};
int main()
{   holes a[50];
    int t,i;
    char *p;

    cin>>t;
    for(i=0;i<t;i++){
        cin>>a[i].s;
        p=a[i].s;
        cout<<counter(p , t);
    }
    return 0;



}
int counter(char s[] ,int t)
{
    int i,m=0;
    for(i=0;i<t;i++)
    {
      if(s[i]=='A' || s[i]=='D'|| s[i]== 'O' || s[i] == 'P' || s[i] == 'R' )
        m++;
        else if(s[i]=='B')
            m=m+2;
              }


        }

    return m;
}
