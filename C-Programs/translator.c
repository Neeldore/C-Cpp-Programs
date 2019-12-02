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
        case 'a' : return '$';
        case 'b' : return '^';
        case 'c' : return 'Y';
        case 'd' : return '<';
        case 'e' : return '>';
        case 'f' : return '@';
        case 'g' : return '#';
        case 'h' : return '&';
        case 'i' : return '*';
        case 'j' : return '=';
        case 'k' : return '+';
        case 'l' : return 'R';
        case 'm' : return '5';
        case 'n' : return '9';
        case 'o' : return '0';
        case 'p' : return '3';
        case 'q' : return '7';
        case 'r' : return '1';
        case 's' : return '2';
        case 't' : return '6';
        case 'u' : return '4';
        case 'v' : return '8';
        case 'w' : return 'E';
        case 'x' : return '!';
        case 'y' : return '{';
        case 'z' : return '}';
        case ' ' : return ' ';
        default : return a;

    }
}
