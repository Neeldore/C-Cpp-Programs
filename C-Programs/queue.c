#include<stdio.h>
#define mx 5
int f=0; r = -1 ; a[10];
void insert()
{
    int item ;
    if(r== (mx-1))
    {
        printf("The queue is full \n");return ;
    }
    printf("Enter the item  \n");
    scanf("%d" , &item);
    r = r+1 ;
    a[r] = item ;
}
void del()
{
    if(f>r)
    {
        printf("The queue is empty \n");
        return ;
    }
    f = f+1 ;
    if(f>r)
    {
        f=0 ; r = -1;
    }
}
void display()
{
    if(f>r)
    {
            printf("Queus is empty \n");
            return ;
    }

}
