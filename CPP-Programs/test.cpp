#include<iostream>
#include<cstring>
using namespace std;
void geteqn(float a[] , int i);
 int main()
 {
     float a[5] , b[5] , c[5] , x ,y ,z ;
     int n , i ;
     cout<<"Enter the diagonally dominant equations \n" ;
     geteqn(a , 1);
     geteqn(b , 2);
     geteqn(c , 3);
     cout<<"Enter the number of iterations \n";
     cin>>n;
     cout<<"Enter the initial approximation for x , y and z respectively \n";
     cin>>x>>y>>z;
     for(i=0; i<n ;i++)
     {
         x = (a[3] - a[1]*y - a[2]*z)/a[0];
         y = (b[3] - b[0]*x - b[2]*z)/b[1];
         z = (c[3] - c[0]*x - c[1]*y)/c[2];
     }
     cout<<"The values of x ,y , z are "<<x<<" "<<y<<" "<<z<<" \n";
     return 0;
 }
 void geteqn(float a[] , int i)
 {
     cout<<"a "<<i<<"= \n";
     cin>>a[0];
     cout<<"b "<<i<<"= \n";
     cin>>a[1];
     cout<<"c "<<i<<"=\n";
     cin>>a[2];
     cout<<"d "<<i<<"=\n";
     cin>>a[3];
 }
