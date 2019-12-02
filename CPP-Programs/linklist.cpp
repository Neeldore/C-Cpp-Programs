#include<iostream>
#include<cstdlib>
using namespace std ;
class link
{
    struct node
    {
        int info ;
        node *link;
    } *f , *t ;
public :
    link()
    {
        f=t=NULL;
    }

    void add()
    {
        int item ;
        cout<<"Enter the item to be inserted \n " ;
        cin>>item ;
        t = new node ;
        t->info = item ;
        t->link = NULL;
        if(f==NULL)
        {
            f = t;
        }
        else
        {
            t->link = f ;
            f = t ;
        }
    }
    void del()
    {
        if(f==NULL)
        {
            cout<<"No item present \n";return ;
        }
        t = f ;
        f=f->link ;
        delete t ;
    }
    void dis()
    {
        t = f;
        if(f==NULL)
        {
            cout<<"The list is empty \n " ;
            return;
        }
        cout<<"The element of the list are \n";
        while(t != NULL)
        {
            cout<<t->info<<" << " ;
            t = t->link ;
        }
        cout<<endl ;}
};
int main()
{
	int ch;
    link  l1;
	//clrscr();
	for(;;)
	{
		cout<<"1.Insert"<<endl<<"2.Delete"<<endl;
		cout<<"3.Display"<<endl<<"4.Exit"<<endl;
		cout<<"Enter the choice"<<endl;
		cin>>ch;
		switch(ch)
		{
			case 1:l1.add();	            //insert() is member function
				break;
			case 2:l1.del();	           //del() is member function
				break;
			case 3:l1.dis();	         //display() is member function
				break;
			case 4:exit(0);
			default:cout<<"Invalid option"<<endl;exit(0);
		}
	}
}

