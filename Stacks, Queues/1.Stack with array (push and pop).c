#include <stdio.h>
#include <stdlib.h>
#define Max 15

void push(int stack[],int *top,int element)
{
    if(*top<Max)
    {
        *top=*top+1;
        stack[*top]=element;
    }
    else
    {
        printf("Stack is full. No value can be pushed!\n");
    }
}
void pop(int stack[],int *top,int *element)
{
    if (*top>=0)
    {
        *element=stack[*top];
        *top=*top-1;
    }
    else
    {
        printf("No value can be popped as the stack is empty.\n");
    }
}
int main()
{
    int stack[Max];
    int top=-1;
    int element,again;

    do
    {
        do
        {
            printf("Enter an element to push:\n");
            scanf("%d",&element);
            push(stack,&top,element);
            printf("Enter 1 to push again.\n");
            scanf("%d",&again);
        } while(again==1);

        printf("Enter 1 to pop an element.\n");
        int popIt;
        scanf("%d",&popIt);
        while(popIt==1){
            pop(stack,&top,&element);
            printf("The value popped is %d\n",element);
            printf("Enter 1 to do it again.\n");
            scanf("%d",&popIt);
        }

        printf("To continue enter 1\n");
        scanf("%d",&again);
    } while(again==1);
}
