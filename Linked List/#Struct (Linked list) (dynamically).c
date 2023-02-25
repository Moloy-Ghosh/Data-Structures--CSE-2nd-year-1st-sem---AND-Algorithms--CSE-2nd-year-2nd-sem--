#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
};

struct node *front=NULL;

void insert(int ele)
{
    struct node *newOne=(struct node*)malloc(sizeof(struct node));
    newOne->data=ele;
    newOne->link=NULL;

    if(front==NULL)
    {
        front=newOne;
    }
    else
    {
        struct node *ptr;
        for(ptr=front;ptr->link!=NULL;ptr=ptr->link)
            ;
        ptr->link=newOne;
    }
}

void deleteq()
{
    if(front==NULL)
        printf("UNDERFLOW.\n");
    else
    {
        struct node *ptr;
        ptr=front;
        front=front->link;
        free(ptr);
    }
}

int main()
{
    int element,again;
    do
    {
        do
        {
            printf("Enter element for insert.\n");
            scanf("%d",&element);
            insert(element);
            printf("Enter 1 to do again.\n");
            scanf("%d",&again);
        } while(again==1);

        printf("Enter 1 to delete.\n");
        scanf("%d",&again);
        while(again==1)
        {
            deleteq();
            printf("Enter 1 to delete again.\n");
            scanf("%d",&again);
        }

        printf("To continue enter 1.\n");
        scanf("%d",&again);
    }while(again==1);

    //Traversal
    printf("All elements of the queue:\n");
    struct node *ptr;
    ptr=front;
    while(ptr!=NULL){
        printf("%d ",ptr->data);
        ptr=ptr->link;
    }
    printf("\n");
}
