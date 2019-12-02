#include<stdio.h>
#include<string.h>
int F(char sym)
{
    switch(sym)
    {
        case '+': return 2;
        case '-': return 2 ;
        case '/':
        case '*':return 4 ;
        case '^':
        case '$':return 5;
        case '(':return 0;
        case '#':return -1;
        default : return 8;
    }
}
int G(char sym)
{
    switch(sym)
    {
        case '+':
        case '-': return 1;
        case '*':
        case '/': return 3;
        case '^': return 6;
        case '$': return 6 ;
        case '(':return 9 ;
        case ')': return 0;
        default : return 7 ;
    }
}
void infixtopostfix(char infix[] , char postfix[])
{
    char s[20] , sym ; int  j=0 , i= 0 , top = -1 ;
    s[++top] = '#';
    for(i=0; i< strlen(infix) ; i++)
    {
        sym = infix[i];
        while(F(s[top])> G(sym))
        {
            postfix[j++] = s[top--];
        }
        if(F(s[top]) != G(sym))
        {
            s[++top] = sym ;
        }
        else
            top--;
    }
    while(s[top]!='#')
    {
        postfix[j++] = s[top--];
    }
    postfix[j] = '\0';
}
int main()
{
    char infix[20]  , postfix[20];
    printf("Enter the infix expression \n");
    scanf("%s", infix);
    infixtopostfix(infix , postfix);
    printf("\n %s" , postfix);
    return 0;
}
