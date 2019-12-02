#include<stdio.h>
char transthis(char a );
int main()
{
    char a[1000],b , ans = 'y';
    int i,j ;
    do{
    printf("Enter the string \n");
    scanf("%[^\n]s",a);
    i = 0;
    while(a[i] != '\0')
    {
        if(a[i] != ' ')
            a[i] = transthis(a[i]);
        else
            a[i] = ' ';
        i++;
    }
    printf("the Translated string is : %s \n" , a);
    getchar();
    }
    while(1);
    return 0 ;
}
char transthis( char a)
{
    switch(a)
    {
        case '$' : return 'a';
        case '^' : return 'b';
        case 'Y' : return'c' ;
        case  '<': return 'd';
        case  '>': return 'e' ;
        case '@':  return 'f' ;
        case  '#': return 'g' ;
        case  '&': return 'h';
        case  '*': return 'i';
        case  '=': return'j' ;
        case   '+': return 'k';
        case 'R': return 'l' ;
        case  '5': return'm' ;
        case  '9': return 'n';
        case'0': return 'o'  ;
        case '3' : return'p' ;
        case '7' : return'q' ;
        case'1' : return 'r' ;
        case '2' : return 's';
        case '6' : return 't';
        case'4' : return  'u';
        case  '8': return'v' ;
        case  'E': return'w' ;
        case '!' : return 'x';
        case  '{': return 'y';
        case '}': return  'z';
        default : return a;

    }
}
