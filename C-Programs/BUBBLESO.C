#include <stdio.h>
#include <conio.h>
void main()
{
	int a[50],j,i,pass,n,temp;
	clrscr();
	printf("enter the size  array\n");
	scanf("%d",&n);
	printf("enter the array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("the entered arry is\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
	for(pass=1;pass<n;pass++)
	{
		for(j=0;j<n-pass;j++)
		{	if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("the array is\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
	getch();
}


