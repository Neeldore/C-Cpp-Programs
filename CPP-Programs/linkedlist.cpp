#include<iostream>
#include<cstdlib>
using namespace std;
class llink
{
    struct node
    {
        int info ;
        node *link;
    }*f , *t;
    public:
    llink()
    {
        f=t=NULL;
    }
    void ins()
    {
        int item ;
        cout<<"enter the number to be inserted \n";
        cin>>item;
        t = new node ;
        t->info = item ;
        t->link=NULL;
        if(f==NULL)
        {
            f=t;
            t->link=NULL;
            return ;
        }
        t->link = f;
        f= t;

    }
    void del()
    {
        if(f==NULL)
        {
            cout<<"The list is empty \n";
            return ;
        }
        cout<<"The element deleted was "<<f->info<<endl;
        t=f ;
        f=f->link;
        delete t;
    }
    void display()
    {
        if(f==NULL)
        {
            cout<<"The list is empty \n";
            return ;
        }
        for(t=f;t!=NULL;t=t->link)
        {
            cout<<t->info<<"<<";
        }
        cout<<endl;
    }
};
int main()
{
    llink a ;
    int ch ;
    for(;;)
    {
        cout<<"Enter the choice 1 to insert 2 to delete 3 to display \n";
        cin>>ch;
        switch(ch)
        {
            case 1:a.ins();break;
            case 2:a.del();break;
            case 3:a.display();break;
            default:exit(0);
        }
    }
}
