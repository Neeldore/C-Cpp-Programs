#include<iostream>
#include<new>
using namespace std;
int main(){
    int *p;
    try{
        p = new int;
    }
    catch(bad_alloc xa){
        cout<<"Allocation Failure \n";
    }
    *p = 100;
    cout<<"At "<<p<<" ";
    cout<<"is the value "<<*p<<"\n";
    delete p;
    return 0;
}
