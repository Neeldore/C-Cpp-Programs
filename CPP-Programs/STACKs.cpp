#include<iostream>
#include<cstdlib>
using namespace std ;
class sta
{
    int s[20] , size , top ;
public:
    sta()
    {
        top = -1 ;
        cout<<"Enter the size \n";
        cin>>size ;
    }
    sta operator +(int n)
    {
        if(top == (size-1))
        {
            cout<<"The stack is full \n";
            return *this ;
        }
        s[++top] = n ;
        return *this;
    }
    sta operator -()
    {
        if(top == -1)
        {
            cout<<"The stack is empty \n" ;return *this ;
        }
        cout<<"The element deleted is "<<s[top--]<<endl ;
        return *this ;
    }
    friend ostream & operator <<(ostream & , sta &);
};
ostream & operator <<(ostream &a , sta &b)
{
    int i;
    if(b.top == -1)
    {
        a<<"stack underflow \n" ;return a;
    }
    a<<"The elements of the stack are \n";
    for(i= b.top ; i>=0 ; i--)
    {
        a<<b.s[i]<<"<<";
    }
    a<<"\n";
    return a ;
}
int main()
{
    sta s;
	int ch;
	for(;;)
	{
		cout<<"1.push\n"<<"2.pop\n"<<"3.display"<<endl;
		cout<<"Enter the choice"<<endl;
		cin>>ch;
		switch(ch)
		{
			case 1:int element;
				cout<<"Enter the element to be inserted"<<endl;
				cin>>element;
				s=s+element;   // operator + function will be invoked
				break;
			case 2:s=-s;		  // operator - function will be invoked
				break;
			case 3:cout<<s;	//operator << function will be invoked
				break;
			default:cout<<"Invalid option"<<endl;
				            exit(0);
		}
	}
}


