#include <stdio.h>
#include <conio.h>
unsigned int rightrot(unsigned int,int);
void main()
{int n;
unsigned int x,m;
printf("enter the number to be rotated\n");
scanf("%u",&x);
printf("how many times\n");
scanf("%d",&n);
m=rightrot(x,n);
printf("the value is %u",m);
getch();}
unsigned int rightrot(unsigned int x,int n)
{int i;
for(i=1;i<=n;i++)
{if (x%2==0)
{x = x>>1;}
else
{x= x>>1;
x += 32768;}}
return x;
}

