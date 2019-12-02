#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <float.h>
int fact(int);
void main()
{	int i;
	float x;
	double sum=1,term;
	clrscr();
	printf("enter the value of x");
	scanf("%f",&x);
	for(i=1;;i++)
	{
		term=pow(x,i)/fact(i);
		if(term<FLT_EPSILON)
		{
			break;
		}
		sum+=term;
	}
	printf("the value of e^%3.1f is %lf\n",x,sum);
	printf("using library function %lf",exp(x));
	getch();
}
int fact(int n)
{
	int prod=1,i;
	for(i=1;i<=n;i++)
	{
		prod=prod*i;
	}
	return prod;
}

