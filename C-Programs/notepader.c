#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    char name[50],command[50],store[] = "start notepad ";
    system("color 02");
    printf("Enter the name of notepad file to be created\n");
    gets(name);
    strcat(store,name);
    system(store);
    system("exit");
    return 0;
}

