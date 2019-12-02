#include <stdio.h>
#include<math.h>

int main()
{
    int  n , i  ; double  a , h , H , x , t ;
    scanf("%d" , &n);
    for(i=0;i<n;i++){
        scanf("%lf%lf%lf" , &a , &H , &t);
        x = a / tan(t * M_PI / 180);

    }
    return 0;

}
