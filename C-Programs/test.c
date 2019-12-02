#include<stdio.h>

#include<stdlib.h>
#include<string.h>
#include<process.h>
 void main()
 {
    int **x  , i , j;
    x = (int *) malloc( 5 * sizeof(int));
    for(i=0;i<5;i++)
    {
        x[i] = (int *) malloc(3 * sizeof(int));
    }
    for(i=0;i<5;i++)
        for(j = 0 ; j<3 ; j++)
        {
            x[i][j] = i;
            printf("%d  %d %d \n" , x[i][j] , x+i , x+j);
        }
 }
