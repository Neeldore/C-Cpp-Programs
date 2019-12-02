#include<stdio.h>
#include<stdlib.h>
int a[10][10] , indegree[10] , n , stack1 , k , top=-1;
void topo()
{
        int i , j , r ;
        for(i=0;i<n;i++)
            for(j=0;j<n;j++)
                if(a[i][j] == 0)
                    indegree[j]++;
        for(i=0;i<n;i++)
            if(indegree[i] == 0 )
                stack1[++top] = i;
        while(top!=-1)
        {
            r = stack1[top--];
            v[k++] = r ;

        }

}
