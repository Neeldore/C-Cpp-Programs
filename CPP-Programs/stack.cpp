#include<iostream>
#include<cstdlib>
using namespace std;
class STACK
{
    int top,s[10] , size ;
    public:
        STACK()
        {
            cout<<"Enter the size of the stack :";
            cin>>size;
            top=-1;
        }
        STACK operator+(int n)
        {
            if(top==(size-1))
            {
                cout<<"The stack has overflown :( \n";
                return *this  ;
            }
            s[++top]=n;
            return *this ;
        }
        STACK operator-()
        {
            if(top==-1)
            {
                cout<<"The stack is empty \n";
                return *this;
            }
            cout<<"the deleted element is "<<s[top--]<<endl;
            return *this ;
        }
        friend ostream & operator<<(ostream &,STACK&);
};
    ostream&operator<< (ostream &p , STACK &c)
    {
        int i;
        i = c.top;
        while(i!=-1)
        {
            cout<<c.s[i]<<endl;
            i--;
        }
    }
    int main()
    {
        STACK a ;
        int ch  , n;
        for(;;)
        {
            cout<<"Enter the choice 1 is insert 2 is delete 3 is display (what more do you want) \n";
            cin>>ch;
            switch(ch)
            {
                case 1:cout<<"Enter the element to be inserted \n";
                        cin>>n;
                        a=a+n;
                        break;
                case 2:a=-a;break;
                case 3:cout<<a;break;
                default:exit(0);
            }
        }
    }
