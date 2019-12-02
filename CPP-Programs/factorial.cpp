#include<iostream>
using namespace std;
int main(){
    long long int n,a,r;
    cin>>n;
    while(n--){
        cin>>a;
        r = 0;
        while(a!=0){
            r +=  a/5;
            a = a/5;
        }
        cout<<r<<endl;
    }
    return 0;
}

