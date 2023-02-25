#include <stdio.h>
#include <stdlib.h>

int link[20];
int data[20];
int front,rear,avail;
void insert(int *front, int *rear,int *avail, int element)
{
    int newNode=*avail;
    *avail=link[*avail];

    data[newNode]=element;
    link[newNode]=-1;

    if(*front==-1)
    {
        *front=*rear=newNode;
    }
    else
    {
        link[*rear]=newNode;
        *rear=newNode;
    }
}

void qDelete(int *front,int *rear,int *avail,int *element)
{
    if(*front==-1) printf("UNDERFLOW.\n");
    else
    {
        int temp=*front;
        *element=data[temp];
        *front=link[*front];

        link[temp]=*avail;
        *avail=temp;
    }
}
int main()
{
    link[11]=3,link[3]=9,link[9]=10,link[10]=19,link[19]=0,link[0]=1,link[1]=5,link[5]=-1;
    front=-1;
    rear=-1;
    avail=11;
    int element,again;

    do
    {
        do
        {
            printf("Enter an element to insert.\n");
            scanf("%d",&element);
            insert(&front ,&rear,&avail,element);
            printf("Enter 1 to insert again.\n");
            scanf("%d",&again);
        } while(again==1);

        printf("Enter 1 to delete.\n");
        scanf("%d",&again);
        while(again==1)
        {
            qDelete(&front,&rear,&avail,&element);
            printf("%d is deleted.\n",element);
            printf("Enter 1 to delete again.\n");
            scanf("%d",&again);
        }

        printf("Enter 1 to do again.\n");
        scanf("%d",&again);
    } while(again==1);

    //Traversal
    printf("All elements after all operations:\n");
    int ptr=front;
    while(ptr!=-1)
    {
        printf("%d ",data[ptr]);
        ptr=link[ptr];
    }
    printf("\n");
}
