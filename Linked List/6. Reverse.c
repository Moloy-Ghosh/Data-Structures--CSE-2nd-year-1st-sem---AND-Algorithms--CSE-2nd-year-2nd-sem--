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
    int p=-1;
    int ptr=start;
    int next;
    printf("Reverse:\n");
    while(1){
        next=link[ptr];

        link[ptr]=p;
        p=ptr;
        if(next==-1){
            start=ptr;
            break;
        }
        ptr=next;
    }

    printf("After Reverse:\n");
    ptr=start;
    while(ptr!=-1){
        printf("%d ",data[ptr]);
        ptr=link[ptr];
    }
}
