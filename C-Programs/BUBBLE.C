#include <stdio.h>
#include <conio.h>
int main()
{int a[50],pass,i,n,temp;
printf("enter the lenght of array\n");
scanf("%d",&n);
printf("enter the array elements\n");
for(i=0;i<n;i++)
{scanf("%d",&a[i]);
}
printf("the elements without sorting\n");
for(i=0;i<n;i++)
{printf("%d\n",a[i]);}
//for(pass=1;pass<n-1;pass++)
for(i=0;i<n-pass;i++)
if(a[i]>a[i+1])
{temp = a[i+1];
a[i+1] = a[i];
a[i] = temp;}

printf("the elemts are\n");
for(i=0;i<n;i++)
printf("%d\n",a[i]);
getch();
}
