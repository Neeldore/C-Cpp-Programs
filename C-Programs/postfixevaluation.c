#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
int compute(int a  , char  b, int c)
{
    switch(b)
    {
        case '+': return a+c;break;
        case '-': return a-c;break;
        case '*': return a*c;break;
        case '/': return a/c;break;
        case '^': return pow(a,c);break;
        case '$': return ;break;

    }
}
void main()
{
    char a[20] , sym ;
    int i , s[20] , top = -1 , res ;
    printf("Enter the postfix Expression \n");
    scanf("%s" , &a);
    for(i=0 ; i<strlen(a);i++)
    {
        sym = a[i];
        if(isdigit(sym))
        {
            s[++top] = sym - '0';
        }
        else{
            res = compute(s[top--] , sym , s[top--]);

        }
    }
    printf("%d", res);
}
