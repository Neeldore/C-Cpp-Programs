#include<stdio.h>
#include<conio.h>
int s[10] ,n, top = -1 , k , indeg[10] , a[10][10] , v[10];
void top1()
{
    int i , j , r ;
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            if(a[i][j])
                indeg[j]++;
    for(i=0;i<n;i++)
        if(indeg[i] == 0)
            s[++top]=i;
    while(top != -1)
    {
        r = s[top--];
        v[k++] = r ;
        for(i=0;i<n;i++)
            if(a[r][i])
            {
                indeg[i]--;
                if(indeg[i] == 0)
                    s[++top] = i;
            }
    }
}
void main()
{
    int i , j ;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    top1();
    if(k==n)
        for(i=0;i<n;i++)
            printf("%d ->",v[i]);
    else
        printf("Not present \n");
}
