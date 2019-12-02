#include <stdio.h>
#include <conio.h>
void main()
{	int row,col,m,n,p,q,a[10][10],b[10][10],c[10][10],k;
	printf("enter the size of matrix a and b\n");
	scanf("%d%d%d%d",&m,&n,&p,&q);
	if(n!=p)
	{
		printf("this can't happen");
		getch();
		exit(0);
	}
	printf("enter the matrix a\n");
	for(row=0;row<m;row++)
	{
		for(col=0;col<n;col++)
		{
			scanf("%d",&a[row][col]);
		}
	}
	printf("enter the matrix b\n");
	for(row=0;row<p;row++)
	{
		for(col=0;col<q;col++)
		{
			scanf("%d",&b[row][col]);
		}
	}

	printf("the matrix a is\n");
	for(row=0;row<m;row++)
	{
		for(col=0;col<n;col++)
		{
			printf("%d\t",a[row][col]);
		}

		printf("\n");

	}
	printf("the matrix b is\n");
	for(row=0;row<p;row++)
	{
		for(col=0;col<q;col++)
		{
			printf("%d\t",b[row][col]);
		}

		printf("\n");

	}
	for(row=0;row<m;row++)
	{
		for(col=0;col<q;col++)
		{
			c[row][col]=0;
			for(k=0;k<n;k++)
			{
				c[row][col]+=a[row][k]*b[k][col];
			}
		}

	}

	printf("the result is\n");
	for(row=0;row<m;row++)
	{
		for(col=0;col<q;col++)
		{
			printf("%d\t",c[row][col]);
		}
		printf("\n");

	}
	getch();
}



