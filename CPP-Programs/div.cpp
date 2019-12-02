#include<iostream>
#include<cstdio>
using namespace std;
main()
{
    long long int n,k,i,a,m=0;
    scanf("%lld%lld",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%lld",&a);
        if((a%k)==0)
        m++;
    }

    printf("%lld",m);
    return 0;
}
