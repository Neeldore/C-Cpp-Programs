#include<iostream>
using namespace std;
int main ()
{
    int n , i , a , b;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a>>b;
        if(a>b)
            cout<<"Participant 1 wins\n";
        else
            cout<<"Participant 2 wins\n";
    }
    return 0;
}
