#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *link;
};

int main()
{
    struct Node *a=NULL;
    struct Node *b=NULL;
    struct Node *c=NULL;
    struct Node *d=NULL;
    struct Node *e=NULL;
    struct Node *f=NULL;
    struct Node *g=NULL;
    a=(struct Node*)malloc(sizeof(struct Node));
    b=(struct Node*)malloc(sizeof(struct Node));
    c=(struct Node*)malloc(sizeof(struct Node));
    d=(struct Node*)malloc(sizeof(struct Node));
    e=(struct Node*)malloc(sizeof(struct Node));
    f=(struct Node*)malloc(sizeof(struct Node));
    g=(struct Node*)malloc(sizeof(struct Node));
    a->link=b;
    b->link=c;
    c->link=d;
    d->link=e;
    e->link=f;
    f->link=g;
    g->link=NULL;

    struct Node *top=NULL;
    struct Node *avail=a;
    int element,again;

    do
    {
        do
        {
            printf("Enter an element to push:\n");
            scanf("%d",&element);
            if(avail!=NULL)
            {
                avail->data=element;
                struct Node *temp;
                temp=top;
                top=avail;
                avail=(avail->link);
                top->link=temp;
            }
            else printf("OVERFLOW.\n");
            printf("Enter 1 to push again.\n");
            scanf("%d",&again);
        } while(again==1);

        printf("Enter 1 to pop.\n");
        scanf("%d",&again);
        while(again==1)
        {
            if(top!=NULL)
            {
                element=top->data;
                struct Node *temp;
                temp=top;
                top=top->link;
                temp->link=avail;
                avail=temp;
                printf("%d is popped.\n",element);
            }
            else printf("UNDERFLOW.\n");
            printf("Enter 1 to pop again.\n");
            scanf("%d",&again);
        }

        printf("To continue enter 1.\n");
        scanf("%d",&again);
    } while(again==1);


    //Traversal:
    printf("All elements after push and pop:\n");
    struct Node *ptr;
    ptr=top;
    while(ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr=ptr->link;
    }
    printf("\n");
}
