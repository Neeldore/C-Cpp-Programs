#include <stdio.h>
#include <conio.h>
void main()
{
	int n1,num1,num2,n2,rem=0;
	printf("enter the two numbers\n");
	scanf("%d%d",&num1,&num2);
	n1=num1;
	n2=num2;
	rem=num1%num2;
	while(rem!=0)
	{
		num1=num2;
		num2=rem;
		rem=num1%num2;
	}
	printf("the GCD is %d\n",num2);
	printf("%d is LCM",(n1*n2)/num2);
	getch();
}
