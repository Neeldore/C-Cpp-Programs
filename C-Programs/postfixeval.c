#include<stdio.h>
int compute(int , char , int );
int main()
{
    int i , top=-1, res ;
    char p[20] , sym  , s[20];
    printf("Enter the postfix expression \n");
    scanf("%s", p);
    for(i = 0 ; i<strlen(p); i++)
    {
        sym = p[i];
        if(isdigit(sym))
        {
            s[++top] = sym - '0';
        }
        else
        {
            res = compute(s[top--] , sym , s[top--]);
            s[++top] = res ;
        }
    }
    printf("The answer is %d \n" , s[top]);
}
int compute(int a , char b , int c)
{
    switch(b)
    {
        case '+' : return a + c ;
        case '-' : return a-c ;
        case '*' : return a*c ;
        case '/' : return a/c ;
    }
}
