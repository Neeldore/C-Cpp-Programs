#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
{float a,b,c,root1,root2,disc=0,ip,rp;
clrscr();
printf("enter the co efs\n");
scanf("%f%f%f",&a,&b,&c);
disc=(b*b)-(4*a*c);
rp=-b/(2*a);
if(disc==0)
{
	printf ("the roots are %f and %f",rp,rp);

	}
else if(disc>0)
{
	root1=rp+(sqrt(disc)/(2*a));
	root2=rp-(sqrt(disc)/(2*a));
	printf("the roots are %f and %f",root1,root2);
	getch();
	}
else
{
	ip=(sqrt(-disc))/(2*a);
	printf("the roots are imagianry\n");
	printf("the roots are %f+%fi and %f-%f",rp,ip,rp,ip);
	}
	getch();
	}
