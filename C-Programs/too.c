#include<stdio.h>
#include <ctype.h>
int main()
{
    char a[] = "BRO";
    int i ;
    for(i=0;i<3;i++)
        a[i] = tolower(a[i]);
    printf("%s",a);
}
