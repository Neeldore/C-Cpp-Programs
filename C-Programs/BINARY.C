#include <stdio.h>
#include <conio.h>
void main()
{
	int a[50],i,low,high,mid,n,key;
	printf("enter the size of the array");
	scanf("%d",&n);
	printf("enter the array in ascending order");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the key element to be searched");
	scanf("%d",&key);
	low=0;
	high=n-1;
	while(low<=high)
	{
		mid=(low+high)/2;
		if(a[mid]==key)
		{
			printf("the element found at %d",mid+1);
			getch();
			exit(0);
		}
		else if(key<a[mid])
		{
			high=mid-1;
		}
		else
		{
			low=mid+1;
		}
	}
	printf("element not found");
	getch();
}