#include<stdio.h>
int par(int a , int s[])
{
    while(a != s[a])
        a = s[a];
    return a;
}
int krus(int n , int a[10][10])
{
    int i , j , count = 0 , t[10][2],min = 999 ,u,v, s[10] , cost = 0 , k = 0;;
    for(i=0;i<n;i++)
        s[i] = i;
    while(count < n-1)

    {
        min = 999;
        for(i=0;i<n;i++)
            for(j=0;j<n;j++)
                if(a[i][j] < min && a[i][j] != 0)
                {
                    min = a[i][j];
                    u = i ;
                    v = j ;
                }
        i = par(u,s);
        j = par(v,s);
        if(i!=j)
        {
            t[k][0]=u;
            t[k][1]=v;
            k++;
            count ++ ;
            cost = cost + min ;
        }
        a[u][v] = a[v][u] = 999;
    }
    for(i=0;i<count;i++)
        printf( "%d -> %d \n" , t[i][0] , t[i][1]);
    printf("%d" , cost);
}
void main()
{
    int i , j , n  , a[10][10];
    scanf("%d",&n);
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    krus(n , a );
}
