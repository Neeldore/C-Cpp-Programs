#include<stdio.h>
#define ms 5
int a[10] , f=0 , r=-1 ;
void insert()
{
    int item ;
    if(r==(ms-1))
    {
        printf("The queue is full god dammit :/ \n ");

    }
    else
    {   printf("Enter the number to inserted \n");
        scanf("%d",&item);
        a[r++] = item ;
    }
}
void del()
{
    int elim;
    if(f> r)
    {
        printf("No elements god dammit \n");

    }
    printf("Item deleted will be : %d \n", a[f]);
    f++;
    if(f>r)
    {
        f=0;
        r=-1;
    }
}
void display()
{
    int i ;
    if(f>r)
    {
        printf("No elements god dammit \n");

    }
    for(i=f ; i<r ; i++)
        printf("%d \n", a[i]);
}
void main()
{
    int b ;
    for(;;)
    {
            printf("Enter your choice \n =\4 Insert = 1  \n =\4 Delete = 2 \n =\4 Display = 3 \n =\4 Exit = 4 \n");
            scanf("%d", &b);
            switch(b)
            {
                case 1:insert();break;
                case 2:del();break;
                case 3:display();break;
                case 4:exit(0);break;
                default:printf("Invalid choice -_- \n");
            }

    }
}
