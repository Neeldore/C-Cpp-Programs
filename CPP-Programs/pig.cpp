#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main(){
    char str1[140] , str2[140];
    int len=0 , wht_spc = 1,i;
    cout<<"Enter the string "<<endl;
    cin.getline(str1 , 140);
    len = strlen(str1);
    i = len;
    while(i >= 0){
        if(isspace(str1[i]))
            wht_spc++;
        i--;
    }
    cout<<wht_spc<<endl;
    return 0;
}
