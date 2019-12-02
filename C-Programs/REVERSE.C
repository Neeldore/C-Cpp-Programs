#include <stdio.h>
#include <conio.h>
#include <string.h>
void rev(char[]);
void main()
{
	char src[200];
	int i;
	printf("enter the string to be reversed\n");
	gets(src);
	printf("the original string is\n");
	printf("%s\n",src);
	rev(src);
}
void rev(char src[])
{
	char a;
	int i=0,j=strlen(src)-1;
	while(i<j)
	{
		a= src[i];
		src[i]=src[j];
		src[j]=a;
		i++;
		j--;
	}
	printf("the reveresed string is : %s",src);
	getch();
}
