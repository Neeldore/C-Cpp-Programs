#include<stdio.h>
int min(int m , int n)
{
    return (m<n) ? m:n;
}
void floyds(int a[10][10] , int c[10][10], int n)
{
    int i ,j,k ;
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            a[i][j]=c[i][j];
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            for(k=0;k<n;k++)
                a[i][j]=min(a[i][j] , a[i][k]+a[k][j]);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            printf("%d \t",a[i][j]);
        printf("\n");
    }
}
void main()
{
    int a[10][10] , c[10][10] ,i,j,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            scanf("%d",&c[i][j]);
    floyds(a,c,n);

}
