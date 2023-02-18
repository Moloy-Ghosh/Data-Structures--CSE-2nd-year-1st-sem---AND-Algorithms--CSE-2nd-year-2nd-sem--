#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *p=NULL;

    //Requesting space of "Welcome".
    p=(char*)malloc(strlen("Welcome")+1);

    printf("About to copy \"Welcome\" to p at address %u\n",p);
    strcpy(p,"Welcome"); //string copied.
    printf("%s\n",p);
    free(p); //value from p is removed.


    int *q=NULL;

    //Requesting space for an array of 3 index.
    q=(int*)malloc(3*sizeof(int));

    printf("To keep array address is %u\n",q);
    q[0]=19;
    q[1]=12;
    q[2]=77; //array value assigned.

    printf("%d %d and %d\n",q[0],q[1],q[2]);
}
