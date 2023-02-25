#include <stdio.h>
#include <stdlib.h>

int link[20];
int data[20];
void push(int *avail,int *top,int element)
{
    if(*avail==-1) printf("OVERFLOW.\n");
    else
    {
        int newAdd;
        newAdd=*avail;
        *avail=link[*avail];
        data[newAdd]=element;
        link[newAdd]=*top;
        *top=newAdd;
    }
}
void pop(int *avail,int *top, int *element)
{
    if(*top==-1)printf("UNDERFLOW.\n");
    else
    {
        *element=data[*top];
        int newRem=*top;
        *top=link[*top];
        link[newRem]=*avail;
        *avail=newRem;
    }
}
int main()
{
    data[11]=34,data[3]=75,data[7]=92,data[17]=88;
    link[11]=3,link[3]=7,link[7]=17,link[17]=-1;
    link[13]=12,link[12]=1,link[1]=0,link[0]=10,link[10]=-1;
    int avail=13;
    int top=11;
    int element,again;
    do
    {
        do
        {
            printf("Enter an element to push:\n");
            scanf("%d",&element);
            push(&avail,&top,element);
            printf("To push again enter 1:\n");
            scanf("%d",&again);
        } while(again==1);

        printf("Enter 1 to pop.\n");
        scanf("%d",&again);
        while(again==1)
        {
            pop(&avail,&top,&element);
            printf("Popped element is %d\n",element);
            printf("Enter 1 to pop again.\n");
            scanf("%d",&again);
        }

        printf("Enter 1 to continue.\n");
        scanf("%d",&again);
    } while(again==1);
}
