#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int isp(char ch)
{
        switch(ch)
        {
            case '+':
            case '-':return 12;
            case '/'://return 14;
            case '*':return 13;
            case '$':
            case '^':return 15;
            case '(':return 0;
            case '#':return -1;
        }
}
int icp(char ch)
{
    switch(ch)
    {
          case '+':
            case '-':return 12;
            case '/':
            case '*':return 13;
            case '$':
            case '^':return 15;
           // case '(':return 19;
    }
}
void inpost(char infix[] , char postfix[])
{
    int i,j=0,top=-1,k;
    char s[10] , sym;
    s[++top]='#';
    k=strlen(infix);
    for(i=0;i<k;i++)                                // (a+b)/a*(e^(f/l))
    {
        sym = infix[i];
        if(isalpha(sym))
        {
            postfix[j++]=sym;
        }
        else if(sym == ')')
        {
            while(s[top]!='(')
                    postfix[j++]=s[top--];
            top--;
        }
        else
        {
            while(isp(s[top]) >= icp(sym))
                    postfix[j++]=s[top--];
            s[++top] = sym;
        }
    }
    while(s[top]!= '#')
        postfix[j++]=s[top--];
    postfix[j]='\0';
}
void main()
{
    char infix[20] , postfix[20];
    printf("Enter the infix expression \n");
    scanf("%s",infix);
    printf("%s",infix);
    inpost(infix,postfix);
    printf("The postfix expression is \n");
    printf("%s",postfix);

}
