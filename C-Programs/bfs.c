#include<stdio.h>
int vis[10];
void bfs(int n , int src , int a[10][10])
{
    int i ,u,v, j , q[10] , f= 0 , r=-1;
    vis[src] = 1;
    q[++r]=src;
    while(f<=r)
    {
        u= q[f++];
        for(v=0;v<n;v++)
        {
            if(a[u][v] ==1 && vis[v]==0)
            {
                q[++r] = v;
                vis[v]=1;
                printf("The path is %d -> %d \n",u,v);
            }
        }
    }
}
void main()
{
    int a[10][10],n , i,j,src;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    printf("The src \n");
    scanf("%d",&src);
    bfs(n,src,a);
    for(i=0;i<n;i++)
        if(vis[i]==0)
            printf("This could not be visited \n");

}
