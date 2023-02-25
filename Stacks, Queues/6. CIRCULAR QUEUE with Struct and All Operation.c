#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#define TRUE 1
#define FALSE 0

struct CQ
{
    int element;
    struct CQ *NEXT;
};

struct CQ *FRONT = NULL;

int EMPTYQ(void);
void INSERT(int);
int REMOVE(void);
void DISPLAY();
void SEARCH(int);

int main()
{
    int num,choice,i;
    int run=1;

    while(run==1)
    {
        printf("Select an option.\n");
        printf("1- Insert an element into the queue.\n");
        printf("2-Remove an element from the queue.\n");
        printf("3-Display all the elements in the queue.\n");
        printf("4-Search an element.\n");
        printf("5-Exit\n");

        printf("Enter your choice:\n");
        scanf("%d",&choice);

        switch(choice)
        {
        case 1:
            {
                printf("Enter the element to be inserted into the queue\n");
                scanf("%d",&num);
                INSERT(num);
                printf("\n\n--Press any key for continue.--\n"); //for "getch()".
                getch();
                break;
            }
        case 2:
            {
                if(EMPTYQ()!=TRUE)
                {
                    i=REMOVE();
                    printf("%d element is removed from the queue.\n",i);
                    printf("\n\n--Press any key for continue.--\n");
                    getch();
                }
                else
                {
                    printf("Queue is empty.\n");
                    printf("\n\n--Press any key for continue.--\n");
                    getch();
                }
                break;
            }
        case 3:
            {
                DISPLAY();
                printf("\n\n--Press any key for continue.--\n");
                getch();
                break;
            }
        case 4:
            {
                printf("Enter the element to be searched:\n");
                scanf("%d",&num);
                SEARCH(num);
                printf("\n\n--Press any key for continue.--\n");
                getch();
                break;
            }
        case 5:
            {
                run=0;
                break;
            }
        default:
            {
                printf("Invalid choice.\n");
                printf("\n\n--Press any key for continue.--\n");
                getch();
                break;
            }
        }
    }
}

int EMPTYQ(void)
{
    if(FRONT==NULL) return TRUE;
    else return FALSE;
}

void INSERT(int ele)
{
    struct CQ *queue =(struct CQ*)malloc(sizeof(struct CQ));
    queue->element=ele;
    if(FRONT==NULL)
    {
        FRONT=queue;
        queue->NEXT=FRONT;
    }
    else
    {
        struct CQ *ptr;
        ptr=FRONT;
        for(ptr=FRONT;ptr->NEXT!=FRONT;ptr=ptr->NEXT)
            ;
        ptr->NEXT=queue;
        queue->NEXT=FRONT;
    }
}

int REMOVE()
{
    struct CQ *ptr=NULL;
    if(EMPTYQ()==FALSE)
    {
        int j=FRONT->element;
        if(FRONT==FRONT->NEXT)
        {
            FRONT=NULL;
        }
        else
        {
            for(ptr=FRONT;ptr->NEXT!=FRONT;ptr=ptr->NEXT)
                ;
            ptr->NEXT=FRONT->NEXT;
            FRONT=FRONT->NEXT;
        }
        return j;
    }
    return -1;
}

void DISPLAY()
{
    struct CQ *ptr=FRONT;
    if(EMPTYQ()==TRUE)
    {
        printf("Queue is Empty.\n");
    }
    else
    {
        printf("Elements present in queue are:\n");
        printf("%d",ptr->element);
        ptr=ptr->NEXT;
        while(ptr!=FRONT)
        {
            printf("\t%d",ptr->element);
            ptr=ptr->NEXT;
        }
    }
}

void SEARCH(int ele)
{
    int flag=0;
    struct CQ *ptr=FRONT;
    if(EMPTYQ()==TRUE)
    {
        printf("Queue is empty.\n");
    }
    else
    {
        if(ptr->element==ele)
        flag=1;
        else
        {
            ptr=ptr->NEXT;
            while(ptr!=FRONT)
            {
                if(ptr->element==ele)
                    flag=1;

                ptr=ptr->NEXT;
            }
        }
    }
    if(flag==1)
        printf("Element %d is present in the list.\n",ele);
    else
        printf("Element %d is not present int the list\n",ele);
}
