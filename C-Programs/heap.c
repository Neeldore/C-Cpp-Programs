#include<stdio.h>
#define mx 8
int heapins(int item , int a[] , int n)
{
    int c , p ;
    if(n >= mx)
    {
        printf("The heap is empty \n");
        return n ;
    }
    c = n ;
    p = (c-1)/2;
    if(c!=0 && item > a[p]);
    {
        a[c] = a[p];
        c = p ;
        p = (c-1) / 2 ;
    }
    a[c] = item ;
    return ++n ;
}
void display(int n , int a[])
{
    int i;
   if( n==0 )
   {
       printf("The heap is full \n");return ;
   }
   printf("The elements of your list are \n");
   for(i=0 ; i<n ; i++)
   {
       printf("%d\n" , a[i]);
   }
}
void main( )
		{
			int a[mx], n=0,item;
			int choice;
			//clrscr();
			printf("1. Insert\n 2. Display\n 3.Exit\n");
			for(;;)
     		 {
				printf("enter the choice");
				scanf("%d",&choice);
				switch(choice)
				{
				case 1:
					printf("enter the element into the heap\n");
					scanf("%d",&item);
					n=heapins(item,a,n);
					break;
				 case 2:
					 display(n ,a);
					 break;
				 case 3:
					exit(0);
			 	}
     		}
		}
