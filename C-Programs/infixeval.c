#include<stdio.h>
#include<string.h>
#include<ctype.h>
int compute(int , char , int);
void main()
{
    char post[20] , sym  ;
    int i  , top=-1 , res , m[20];
    printf("Enter the postfix expression \n");
    scanf("%s",post);
    printf("%s\n",post);
    for(i=0;i<strlen(post);i++)
    {
        sym=post[i];
        if(isdigit(sym))
        {
            m[++top] = sym-'0';
        }
        else
        {
            res = compute(m[top--] , sym , m[top--]);
            printf("%d\n",res);
            m[++top] = res ;
        }

    }
    res = m[top];
    printf("%d",res);

}
int compute(int a , char b , int c)
{
    switch(b)
    {
        case '+': return a+c;
        case '-':return a-c;
        case '*':return a*c;
        case '/':return a/c;
    }
}
