#include<iostream>
#include<cstdlib>
using namespace std;
class link
{
    struct node
    {
        int info ;
        node *link;
    } *f , *t;
    int size ;
    public:
        link()
        {
            f=t=NULL;
        }
        void insert1()
        {
            int item ;
            cout<<"Enter the item to be inserted \n";
            cin>>item ;
            t= new node ;
            t->info = item ;
            t->link = NULL;
            if(f==NULL)
            {
                f=t;
            }
            else
            {
                t->link = f;
                f=t;
            }
        }
        void del()
        {
            int dell;
            if(f==NULL)
            {
                cout<<"The list is empty \n";
            }
            else
            {
                t= f;
                f= f->link ;
                cout<<"Item deleted was "<<t->info<<endl;
                delete t ;
            }
        }
        void display()
        {
            if(f==NULL)
            {
                cout<<"The list is empty \n ";
            }
            t = f;
            cout<<"The elements of the list are \n";
            for(;t->link!=NULL ; t=t->link)
            {
                cout<<t->info<<"<<";
            } cout<<endl;
        }
};
int main()
{
    int ch ;
    link a ;
    for(;;)
    {
        cout<<"\4\4\4\4\4\4\4\4\4\4\4\4\4\n";
        cout<<"\4 1.Insert  \4\n\4 2.Delete  \4\n\4 3.Display \4\n\4 4.Exit    \4 \n";
        cout<<"\4\4\4\4\4\4\4\4\4\4\4\4\4\n";
        cout<<"Enter your choice \n";
        cin>>ch;
        switch(ch)
        {
            case 1 : a.insert1();break ;
            case 2 : a.del(); break ;
            case 3 : a.display();break ;
            case 4 : exit(0);
            default: cout<<"Wrong option :( \n";
        }
    }

}
