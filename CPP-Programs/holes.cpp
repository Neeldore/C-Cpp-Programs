#include<iostream>
#include<cstring>
using namespace std;
int fact(int n)
{
    while(--n)
        n *= n;
}
int main()
{
    int i=123 , rem =0;
    while(i!=0)
    {
        rem = i%10;
        i/=10;
    }
    cout<<rem<<i<<endl;
}
