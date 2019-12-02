#include<stdio.h>
#include<stdlib.h>
void main ()
{
    int m[10][10] , s[10][10] , nz = 0 , mr , mc , i , j , k  ;
    printf("Enter the number of rows and columns \n");
    scanf("%d%d" , &mr , &mc);
    printf("Enter the matrix \n");
    for( i =1 ; i<= mr; i++)
    {
        for(j= 1 ; j<=mc ; j++)
        {
            scanf("%d" , &m[i][j]);
            if(m[i][j] != 0)
                nz++;
        }
    }
    s[1][1] = mr ;
    s[1][2] = mc ;
    s[1][3] = nz ;
    k= 2;
    for(i=1 ; i<= mr ; i++)
    {
        for(j=1 ; j<=mc ; j++)
        {
            if(m[i][j] != 0)
            {
                s[k][1] = i;
                s[k][2] = j ;
                s[k][3] = m[i][j];
                k++;
            }
        }
    }
    printf("The sparse matrix is \n");
    for(i =1 ;i< k ; i++)
    {
        for(j = 1 ; j<=3 ; j++)
        {
            printf("%d \t" , s[i][j]);
        }
        printf("\n");
    }
    printf("Enter the element to be searched \n");
    scanf("%d" , &j);
    for(i=2 ; i<k ; i++)
    {
        if(j == s[i][3])
        {
            printf("The element found at %d , %d \n", s[i][1] , s[i][2]);

        }
    }
    return 0;
}
