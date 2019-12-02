#include<stdio.h>
int a[10][10] , v[10] , w[10] , t[10] ;
int max1(int a , int b)
{
    return (a>b) ? a:b;
}
void knapsack(int c, int n)
{
    int i ,j;
    for(i=0;i<=n;i++)
        for(j=0;j<=c;j++)
        {
                if(i==0 || j==0)
                    a[i][j] = 0;
                else if(w[i] > j)
                    a[i][j] = a[i-1][j];
                else
                {
                    printf("Else executed \n with %d as v[i] " , v[i]);
                    a[i][j] = max1(a[i-1][j] , a[i-1][j-w[i]]+v[i]);

                }
                printf("(%d , %d)%d----> \t",i,j,a[i][j]);
        }
    i=n;
    j = c;
    while(i> 0 && j>0)
    {
        if(a[i][j] != a[i-1][j])
            {
                t[i] = 1;
                j -= w[i];
            }
        i--;
    }
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=n;j++)
            printf("%d \t",a[i][j]);
       printf("\n");
    }
    for(i=0;i<n;i++)
        if(t[i]==1)
            printf("%d ->",i);
}
void main()
{
    int i , j , c ,n ;
    scanf("%d%d",&n,&c);
    for(i=1;i<=n;i++)
        {
            scanf("%d%d",&w[i],&v[i]);
            printf(" \n%d ->%d \n",w[i],v[i]);
        }
    knapsack(c,n);
}
