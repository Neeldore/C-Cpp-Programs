#include <stdio.h>
#include <conio.h>
void main()
{int num,i,rev=0,rem;
printf("enter the number");
scanf("%d",&num);
while(num!=0)
{rem = num%10;
rev =(rev*10) + rem;
num = num/10;}
printf("rev = %d and ",rev);
getch();
}