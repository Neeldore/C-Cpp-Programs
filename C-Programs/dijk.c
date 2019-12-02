#include<stdio.h>
void dijk(int n , int src , int a[10][10],int d[],int p[] , int dest)
{
    int i , j  , min , u,v,s[10];
    for(i=0;i<n;i++)
    {
        d[i]=a[src][i];
        p[i]=src;
        s[i]=0;
    }
    s[src]=1;
    for(i=0;i<n;i++)
    {
        min = 999;
        u = -1;
        for(j=0;j<n;j++)
            if(s[j]==0)
                if(d[j] < min)
                {
                    min = d[j];
                    u = j;
                }
        if(u==-1) return ;
        s[u]=1;
        if(u== dest) return ;
        for(v=0;v<n;v++)
            if(s[v]==0)
                if(d[v] > a[u][v]+d[u])
                {
                    d[v] = a[u][v]+d[u];
                    p[v]=u;
                }
    }
}
void printpath(int src , int dest , int p[] , int d[])
{
    int i ;
    i=dest;
    while(i!= src)
    {
        printf("%d <- \t",i);
        i = p[i];
    }
    printf("%d = %d \n",i,d[dest]);
}
void main()
{
    int a[10][10] , n,src,dest ,i,j,d[10],p[10];
    scanf("%d",&n);
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    printf("src \n");
    scanf("%d",&src);
    for(j=0;j<n;j++)
    {
        dijk(n,src,a,d,p,j);
        if(d[j]==999)
            printf("Not reachable \n");
        else if(src != j)
        {
            printpath(src,j,p,d);
        }
    }
}
