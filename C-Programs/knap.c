#include<stdio.h>
int v[10],w[10],a[10][10],t[10];
int max(int n , int m)
{
    return (n>m) ? n:m;
}
void knap(int c , int n)
{
    int i ,j ;
    for(i=0;i<=n;i++)
        for(j=0;j<=c;j++)
        {
            if(i==0 || j==0)
                a[i][j]= 0;
            else if( w[i] > j)
                a[i][j] = a[i-1][j];
            else
                a[i][j] = max(a[i-1][j] , a[i-1][j - w[i]] + v[i]);
        }
    i = n;
    j=c;
    while(i> 0 && j>0)
    {
        if(a[i][j] != a[i-1][j])
        {
            t[i] = 1 ;
            j=j-w[i];
        }
        i--;
    }
}
void main()
{
    int c , n , i ,j;
    scanf("%d%d",&n,&c);
    for(i=1 ; i<=n ;i++)
        scanf("%d%d",&w[i],&v[i]);
    knap(c,n);
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=c;j++)
            printf("%d \t",a[i][j]);
        printf("\n");
    }
    for(i=0;i<=n;i++)
        if(t[i])
            printf("%d \t",i);
}
