#include <stdio.h>
#include <conio.h>
void main()
{	unsigned int n;
	int count=0;
	n=~0;
	while(n!=0)
	{
		n=n<<1;
		count++;
	}
	printf("%d",count);
	getch();
}