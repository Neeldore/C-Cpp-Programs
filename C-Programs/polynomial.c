#include<stdio.h>
#include<stdlib.h>
#include<math.h>
struct node
{
    float cf ;
    int px ;
    struct node *link ;
};
typedef struct node *NODE ;
NODE insertrear(float ,int , NODE);
NODE getnode()
{
    NODE temp ;
    temp = (NODE) malloc(sizeof(struct node));
    if(temp == NULL)
    {
        printf("You just bricked your compute \n");return ;
    }
    return temp ;
}
NODE readpoly(NODE head)
{
    float cf ;
     int px ;
    for(;;)
    {
        printf("Enter the co ef \n");
        scanf("%f",&cf);
        if(cf==-999) break ;
        printf("Enter the Power \n");
        scanf("%d" , &px);
        head = insertrear(cf,px,head);
    }
    return head ;
}

NODE insertrear(float cf , int px , NODE head)
{
    NODE temp  , cur;
    temp = getnode();
    temp->cf = cf ;
    temp->px = px ;
    cur = head->link;
    while(cur->link!= head)
        cur = cur->link;
    cur->link = temp ;
    temp->link = head ;
    return head ;
}

NODE addpoly(NODE h1 , NODE h2 , NODE h3)
{
    NODE p1 , p2 ;
    p1 = h1->link ;
    p2 = h2->link;
    while(p1 != h1 && p2 != h2)
    {
        if(p1->px == p2->px)
        {
            h3 = insertrear(p1->cf + p2-> cf ,p1->px , h3);
            p1=p1->link ;
            p2 = p2->link;
        }
        else if(p1->px > p2->px)
        {
            h3 = insertrear(p2->cf , p2->px , h3);
            p2=p2->link ;
        }
        else if(p2->px < p2->px)
        {
            h3 = insertrear(p1->cf , p1->px , h3);
            p1=p1->link ;
        }
    }
    for(;p1 != h1 ; p1=p1->link)
    {
        h3=insertrear(p1->cf , p1->px , h3);
    }
    for(;p2 != h2; p2=p2->link)
    {
        h3=insertrear(p2->cf , p2->px , h3);
    }
    return h3;
}
void display(NODE h)
{
    NODE temp ;
    if(h->link == h)
    {
        printf("The stuff contains no nomials \n"); return ;
    }
    temp = h->link;
    while(temp!=h)
    {
        printf("%f ^ %d +" , temp->cf , temp->px );
        temp = temp->link;
    }
    printf("\n");
    return ;
}
int main()
{
    NODE h1,h2,h3;
    h1=getnode();
    h2=getnode();
    h3=getnode();
    h1->link = h1;
    h2->link = h2;
    h3->link = h3;
    printf("Enter the 1st polynomial \n");
    h1 = readpoly(h1);
    printf("Enter the 2nd polynomial \n");
    h2 = readpoly(h2);
    printf("Your polynomials are \n");
    display(h1);
    display(h2);
    h3 = addpoly(h1,h2,h3);
    display(h3);
    return 0 ;
}
