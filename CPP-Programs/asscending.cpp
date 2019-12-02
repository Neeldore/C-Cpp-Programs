#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;
int main()
{
    long long int t,*n;
    int i=0;
    scanf("%lld",&t);
    n = new long long int [t];
    for(i=0;i<t;i++)
    {
        scanf("%lld",&n[i]);
    }
    sort(n,n+t);
    for(i=0;i<t;i++)
    {
        printf("%lld\n",n[i]);
    }
    delete[] n;
    return 0;
}
