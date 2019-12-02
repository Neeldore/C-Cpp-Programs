#include <stdio.h>
#include <conio.h>
void main()
{
	float a[20],i,x,n,sum=0;
	clrscr();
	printf("enter the order of polynomial");
	scanf("%f",&n);
	printf("enter the co'efs ");
	for(i=0;i<=n;i++)
	{
		scanf("%f",&a[i]);
	}
	printf("enter the value of x");
	scanf("%f",&x);
	for(i=n;i>0;i--)
	{
		sum=(sum+a[i])*x;
	}
	sum = sum+a[0];
	printf("the sum is %f",sum);
	getch();
}
