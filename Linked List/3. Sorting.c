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
    int ptr=start;
    while(ptr!=-1){
        int ptr2=link[ptr];
        while(ptr2!=-1){
            if(data[ptr]>data[ptr2]){
                int temp=data[ptr];
                data[ptr]=data[ptr2];
                data[ptr2]=temp;
            }
            ptr2=link[ptr2];
        }
        ptr=link[ptr];
    }

    printf("After Sorting:\n");
    ptr=start;
    while(ptr!=-1){
        printf("%d ",data[ptr]);
        ptr=link[ptr];
    }
}
