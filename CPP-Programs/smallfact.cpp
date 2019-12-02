#include<iostream>
using namespace std;
long long int fact(long long int );
int main()
{
    long long int n,t,i;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>t;
    }
    for(i=0;i<n;i++){
        cout<<fact(t)<<endl;
    }
    return 0;
}
long long int fact(long long int n)
{
    if(n==0)
        return 1;
    else{
        return n*fact(n-1);
    }
}
