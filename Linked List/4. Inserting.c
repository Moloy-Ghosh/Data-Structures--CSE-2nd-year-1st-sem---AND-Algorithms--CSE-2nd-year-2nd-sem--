#include <stdio.h>
#include <stdlib.h>

int data[20];
int link[20];
int start;
int avail;

int main()
{
    data[11]=12,data[19]=34,data[1]=35,data[6]=42,data[3]=56; //Sorted list
    link[11]=19,link[19]=1,link[1]=6,link[6]=3,link[3]=-1,
    link[18]=17,link[17]=2,link[2]=15,link[15]=4,link[4]=7,link[7]=5,link[5]=-1; //some available nodes are written separately

    start=11;
    avail=18;
    int ptr;
    ptr=start;

    printf("Enter a number for Inserting:\n");
    int item;
    scanf("%d",&item);
    int newNodeIndex;
    if(avail==-1){
        printf("Overflow.\n");
    }
    else{
        newNodeIndex=avail;
        data[newNodeIndex]=item;
        avail=link[newNodeIndex];



        int previousLink=-1;
        while(ptr!=-1){
            if(item<data[ptr]){
                break;
            }
            previousLink=ptr;
            ptr=link[ptr];
        }
        if(previousLink==-1){
            link[newNodeIndex]=start;
            start=newNodeIndex;
        }
        else{
            link[newNodeIndex]=link[previousLink];
            link[previousLink]=newNodeIndex;
        }



    }

    printf("After Inserting:\n");
    ptr=start;
    while(ptr!=-1){
        printf("%d ",data[ptr]);
        ptr=link[ptr];
    }
}
