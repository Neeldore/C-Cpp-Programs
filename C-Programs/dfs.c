#include<stdio.h>
int a[10][10] , v[10] , n , s[10] , top = -1  ;
void dfs( int src)
{
    int i ;
    s[++top] = src ;
    v[src] = 1;
    for(i=0;i<n;i++)
        if(a[src][i] == 1 && v[i]==0)
        {
            printf("%d -> %d \n",src , i);
            dfs(i);
        }
}
void main()
{
    int i , j ;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    scanf("%d",&j);
    dfs(j);
}
