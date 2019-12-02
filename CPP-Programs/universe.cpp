#include<iostream>
using namespace std;
main()
{   int c[50],i,n;
    for(i=0;;i++)
        {cin>>c[i];
        n=i;
        if(c[i]==42)
            break;
        }
    for(i=0;i<n;i++)
        cout<<c[i]<<endl;
}
