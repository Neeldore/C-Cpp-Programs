#include<stdio.h>
void warshal(int a[10][10] , int n)
{
    int i , j ,k;
    for(k=0;k<n;k++)
        for(i=0;i<n;i++)
            for(j=0;j<n;j++)
                a[i][j] = a[i][j] || a[i][k] && a[k][j];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            printf("%d \t",a[i][j]);
        printf("\n");
    }
}
void main()
{
    int i , j , a[10][10] , n ;
    scanf("%d ",&n);
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    warshal(a, n);

}
