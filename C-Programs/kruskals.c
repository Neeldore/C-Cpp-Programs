#include<stdio.h>
int parent(int a , int s[])
{
    while(a!= s[a])
        a = s[a];
    return a;
}
void krus(int n, int a[10][10])
{
    int i,j,k=0,s[i],t[10][2],min=999 , count=0,u,v , sum=0;

    for(i=0;i<n;i++)
        s[i]=i;
    while(count < n-1)
    {
        min = 999;
        for(i=0;i<n;i++)
            for(j=0;j<n;j++)
                if(a[i][j] != 0 && a[i][j] < min)
                {
                    min = a[i][j];
                    u=i;
                    v=j;
                }
        if(min == 999 ) break;
        i = parent(u,s);
        j = parent(v,s);
        if(i!=j)
        {
            t[k][0]=u;
            t[k][1]=v;
            count++;
            sum += min;
            s[i]= j ;
            k++;
        }
        a[u][v]=a[v][u]=999;
    }
    if(count==n-1)
    {
        printf("the solution is \n");
        for(i=0;i<n-1;i++)
        {
            printf("%d -> %d \n",t[i][0],t[i][1]);
        }
        printf("Sum is %d \n",sum);
    }
}
void main()
{
    int i ,j,a[10][10] , n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    krus(n,a);
}
