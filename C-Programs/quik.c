#include<stdio.h>
#include<time.h>
#include<math.h>
#include<stdlib.h>
int partition(int a[] , int low , int high);
void quik(int a[] , int low , int high)
{
    int s ;
    if(low <= high)
    {
        s = partition(a, low , high);
        quik(a,low,s);
        quik(a,s+1 , high);
    }
}
int partition(int a[] , int low , int high)
{
    int p = a[low] , i ,j ,temp;
    i = low +1 ;
    j = high;
    while(1)
    {
        while(p >= a[i] && i < high)
            i++;
        while(p < a[j])
            j--;
        if(i<j)
        {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
        else
        {
            temp = a[low];
            a[low]=a[j];
            a[j] = temp;
            return j;
        }
    }
}
void main()
{
    int a[5000] , i,j,n ;
    clock_t s , e ;
    s=e=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        a[i] = rand()%50000;
        printf("%d \t",a[i]);
    }
    s = clock();
    quik(a,0,n-1);
    e = clock();
    printf("%d",&j);
    for(i=0;i<n;i++)
    {
        printf("%d \t",a[i]);
    }
    printf("%lf", (s-e)/CLOCKS_PER_SEC);
}
