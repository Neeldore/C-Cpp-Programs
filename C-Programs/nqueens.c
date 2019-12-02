#include<stdio.h>
int b[10] , count = 1;
void disp( int n);
int place(int row , int col)
{
    int i ;
    for(i= 1 ;i<row ; i++)
        if(b[i]==col || abs(b[i]-col) == abs(i-row))
            return 0;
    return 1;
}
void queens(int row , int n)
{
    int col;
    for(col = 1 ; col <=n ; col ++)
        if(place(row , col))
        {
            b[row] = col;
            if(row == n)
                disp(n);
            else
                queens(row+1 , n);
        }
}
void disp( int n)
{
    int i , j;
    printf("The %d solution is \n",count++);
    for(i=1 ; i<=n ;i++)
        {
            for(j=1;j<=n;j++)
            {
                if(b[i]==j)
                    printf("Q \t");
                else
                    printf("* \t");
            }
            printf("\n");
        }
}
void main()
{
    int n ;
    scanf("%d",&n);
    queens(1 , n);
}
