#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
    int info ;
    struct node *llink ;
    struct node *rlink ;

};
typedef struct node *NODE ;
NODE getnode()
{
    NODE t ;
    t = (NODE) malloc(sizeof(struct node));
    return t ;
}
NODE insertfront(NODE head , int item )
{
    NODE t , cur ;
    cur = head->rlink ;
    t = getnode();
    t->info = item ;
    t->llink = head ;
    t->rlink = cur ;
    cur -> llink = t ;
    head ->rlink = t ;
    return head ;
}
