#include<iostream>
using namespace std;
int rev(int n);
int main()
{
    int n,c[50],a[50],b[50],i;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i]>>b[i];
    }
    for(i=0;i<n;i++)
    {
    c[i] = rev(a[i])+rev(b[i]);
    cout<<rev(c[i])<<endl;
    }
    return 0;
}
int rev(int n)
{int rem,rev=0;
    while(n!=0)
        {rem = n%10;
        rev= 10*rev+ rem;
        n=n/10;}
        return rev;
}



