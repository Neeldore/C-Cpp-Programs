#include<stdio.h>
int main()
{
    char a[80];
    int i =0;
    scanf("%80[^\n]" , a);
    printf("%s" , a);
    while(a[i] != '\0')
        printf("%c" , a[i++]);
    return 0;
}
