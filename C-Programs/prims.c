#include<stdio.h>
void prims(int a[10][10] , int n)
{
    int sum ,i , j , k , u , src,v , t[10][2] , min = 999 , d[10] , p[10] , s[0] ;
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            if(a[i][j] <= min )
            {
                min = a[i][j];
                src = i;
            }
    for(i = 0 ;i<n;i++)
    {
        d[i] = a[src][i];
        p[i] = src ;
        s[i] = 0;
    }
    s[src] = 1 ;
    sum =0;
    k = 0;
    for(i=0;i<n ; i++)
    {
        min = 999 ;
        u = -1 ;
        for(j=0;j<n;j++)
            if(s[j]==0)
                if(d[j] < min)
                {
                    min = d[j];
                    u = j;
                }
        for(v = 0 ; v<n ; v++)
            if(s[v] == 0)
                if(d[v] > a[u][v])
                {
                    d[v] = a[u][v];
                    p[v] = u;
                }
        t[k][0] = v;
        t[k][1] = p[v];
        sum += a[v][p[v]];
        s[u] = 1;
        if(sum )
    }
}
