#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node *next;
};
int main()
{
    struct Node *a=NULL;
    struct Node *b=NULL;
    struct Node *c=NULL;
    struct Node *start;
    struct Node *ptr;
    a=(struct Node*)malloc(sizeof(struct Node));
    b=(struct Node*)malloc(sizeof(struct Node));
    c=(struct Node*)malloc(sizeof(struct Node));
    a->data=10;
    b->data=20;
    c->data=30;
    a->next=b;
    b->next=c;
    c->next=NULL;
    printf("Elements:\n");
    start=a;
    ptr=start;
    while(ptr!=NULL){
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
    printf("Enter a number for searching:\n");
    int item;
    scanf("%d",&item);
    int pos=0;
    ptr=start;
    while(ptr!=NULL){
        pos++;
        if(ptr->data==item){
            printf("Found at %d\n",pos);
            break;
        }
        ptr=ptr->next;
    }
    if(ptr==NULL)printf("Not found\n");
}
