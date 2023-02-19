#include <stdio.h>
#include <stdlib.h>

int data[20];
int link[20];
int start;

int main()
{
    data[11]=56,data[19]=35,data[1]=42,data[6]=34,data[3]=12;

    link[11]=19,link[19]=1,link[1]=6,link[6]=3,link[3]=-1;

    start=11;
    int ptr;
    ptr=start;

    printf("Enter a number for searching:\n");
    int num;
    scanf("%d",&num);

    while(ptr!=-1){
        if(data[ptr]==num) break;
        ptr=link[ptr];
    }

    if(ptr==-1)printf("Number not found\n");
    else printf("Index number of %d is %d\n",num,ptr);
}
