#include<stdlib.h>
int main(){
    system("color 02");
    int i;
    printf("Enter 1 for shut down and 2 to restart\n");
    scanf("%d",&i);
    if(i==1)
        system("shutdown -s");
    else
        system("shutdown -r");


    return 0;
}

