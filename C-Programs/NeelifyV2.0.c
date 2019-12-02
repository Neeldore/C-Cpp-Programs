#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void start();
void stop();
void create();
void main()
{
        int a ;
        printf("Enter \n 1. Create a New hosted network \n 2. Start Hosted Network \n 3. To stop it ");
        scanf("%d",&a);
        switch(a)
        {
            case 1:create();break;
            case 2:start();break;
            case 3:stop();break;
            default: printf("Invalid command \n");
        }

}
start()
{
    system("netsh wlan start hostednetwork");
}
stop()
{
    system("netsh wlan stop hostednetwork");
}
create(){
    char a[15] , b[15] ,c[]="ssid=" , d[]="key=" , e[]="netsh wlan set hostednetwork mode=allow";
    printf("Enter the SSID \n");
    scanf("%s",a);
    printf("Enter the password \n");
    scanf("%s",b);
    strcat(c,a);
    strcat(d,b);
    strcat(e,c);
    strcat(e,d);
    system(e);
}
