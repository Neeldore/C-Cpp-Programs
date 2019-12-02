#include<stdio.h>
int tspap(int n , int a[10][10] , int tour[] , int start);
int tspdp(int n , int a[10][10] , int tour[] , int start);
void main()
{
    int  i,j,n , a[10][10] , tour1[10] , tour2[10] , cost1 , cost2 ;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    for(i=0;i<n;i++)
        tour1[i] = i;
    cost1 = tspdp(n , a, tour1 ,0);
    cost2 = tspap( n , a ,  tour2 ,  0);
    printf("%f \n",(float) cost2/cost1);
    for(i=0;i<=n;i++)
        printf("%d ->",tour1[i]+1);
    printf("%d \n", cost1);
    for(i=0;i<=n;i++)
        printf("%d ->",tour2[i]+1);
    printf("%d \n ", cost2);
}
int tspdp(int n , int c[10][10] , int tour[] , int start)
{
    int i , j , min =999, temp[10] , mintour[10] , cc ,k;
    if(start == n-2)
        return c[tour[n-2]][tour[n-1]]+c[tour[n-1]][0];
    for(i=start+1 ; i<n ;i++)
    {
        for (j=0;j<n;j++)
            temp[j] = tour[j];
        temp[start+1] = tour[i];
        temp[i] = tour[start+1];
        if(c[tour[start]][tour[i]] + (cc = tspdp(n,c,temp , start+1)) < min)
        {
            min = c[tour[start]][tour[i]] + cc;
            for(k=0;k<n;k++)
                mintour[k] = temp[k];
        }
    }
    for(i=0;i<n;i++)
        tour[i] = mintour[i];
    return min ;
}
int tspap(int n , int c[10][10] , int tour[] , int start)
{
    int v= start , v1 , f[4] ,i,min,j;
    f[0] = 1 ;
    int  sum =0;
    tour[0] = start;
    for(i=1;i<n;i++)
    {
        min = 999;
        for(j=0;j<n;j++)
            if((c[v][j] != 0 && c[v][j] < min) && f[j]!= 1)
            {
                min = c[v][j];
                v1 = j;
            }
        f[v1] = 1;
        sum += min;
        v=v1;
        tour[i] = v;
    }
    sum += c[v][start];
    tour[i] = start ;
    return sum ;
}
