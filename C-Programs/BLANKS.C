#include <stdio.h>
#include <conio.h>
void main()
{	char src[100],dest[100];
	int i=0,j=0;
	printf("enter the string\n");
	gets(src);
	while(src[i]!='\0')
	{
		dest[j]=src[i];
		i++;
		j++;
		if(src[i-1]==' ')
		{
			while(src[i]==' ')
			{
				i++;
			}
		}
	}
	dest[j]='\0';
	printf("%s",dest);
	getch();
}
