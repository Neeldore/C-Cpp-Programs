#include<stdio.h>
int set[10] , int s[10] , sum  , d , n;
void subset(int , int );
void main()
{
    scanf("%d", &n);
    for(i=0;i<n;i++)
        scanf("%d",&s[i]);
    scanf("%d",&d);
    subset(0,0);
}
subset(int sum , int i)
{
    if(sum == d )
    {
        flag = 1;
        display(count);
        return ;
    }
    if(sum > d || i>=n) return ;
    else
    {
        set[count++] = s[i];
        subset(sum + s[i] , i+1);
        count--;
        subset(sum , s[i]);
    }
}
