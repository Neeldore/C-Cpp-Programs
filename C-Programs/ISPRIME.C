#include <stdio.h>
#include <conio.h>
int isprime(int);
void main()
{
	int n,result;
	printf("enter the number to be tested");
	scanf("%d",&n);
	if(n==0)
	{
		printf("the number is not a prime");
		getch();
		exit();
	}
	result=isprime(n);
	if(result==0)
	{
		printf("the number is not a prime");
	}
	else
	{
		printf("the number is a prime");
	}
	getch();
}
int isprime(int n)
{
	int i;
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
			return 0;
		}
	}
	return -1;
}