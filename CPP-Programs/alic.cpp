#include<iostream>
#include<cmath>
using namespace std;
int main ()
{
    int n ,i;
    float a , b;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a>>b;
        cout<<ceil((a+b)/2)<<endl;
    }
    return 0;
}
