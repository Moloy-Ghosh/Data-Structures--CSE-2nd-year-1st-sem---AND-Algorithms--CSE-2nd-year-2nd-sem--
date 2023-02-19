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
    struct Node *start=NULL;
    struct Node *previousNode=NULL;
    struct Node *ptr=NULL;
    a=(struct Node*)malloc(sizeof(struct Node));
    b=(struct Node*)malloc(sizeof(struct Node));
    c=(struct Node*)malloc(sizeof(struct Node));
    a->data=10;
    b->data=20;
    c->data=30;
    a->next=b;
    b->next=c;
    c->next=NULL;
    printf("Enter item for delete:\n");
    int item;
    scanf("%d",&item);
    start=a;
    ptr=start;
    while(ptr!=NULL){
        if(ptr->data==item){
            if(previousNode==NULL){
                start=ptr->next;
            }
            else{
                previousNode->next=ptr->next;
            }
            break;
        }
        previousNode=ptr;
        ptr=ptr->next;
    }

    printf("After delete:\n");
    ptr=start;
    while(ptr!=NULL){
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
}
