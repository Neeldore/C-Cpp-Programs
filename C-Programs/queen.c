#include<stdio.h>
#include<math.h>
int x[20] , count=1;
int place(int , int);
void queens(int , int);
void main()
{
    int k=1 , n;
    printf("Enter the number of queens \n");
    scanf("%d",&n);
    queens(k,n);
}
void queens(int k , int n)
{
    int i , j;
    for(j=1;j<=n;j++)
    {
        if(place(k,j))
        {
            x[k]=j;
            if(k==n)
            {
                printf("%d solution is \n",count);
                count++;
                for(i=1;i<=n;i++)
                {
                    for(j=1;j<=n;j++)
                    {
                        if(x[i]==j)
                            printf("Q \t");
                        else
                            printf("* \t");
                    }
                    printf("\n");
                }
            }
            else
                queens(k+1,n);
        }
    }
}
int place(int k , int j)
{
    int i;
    for(i=1;i<k;i++)
        if(x[i]==j || (abs(x[i]-j) == abs(i-k)))
            return 0;
    return 1;
}
