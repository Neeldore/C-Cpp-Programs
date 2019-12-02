#include<iostream>
#include<cstdio>
using namespace std;
main()
{
    int x ; float n ,i;
    cin>>x>>n;
    if(x<(n-0.50) && x%5==0 && x<2000 && n<2000 )
    {   n = n-x-0.50;
        printf("%.2f",n);
    }
    else
        printf("%.2f",n);
        return 0;
}
