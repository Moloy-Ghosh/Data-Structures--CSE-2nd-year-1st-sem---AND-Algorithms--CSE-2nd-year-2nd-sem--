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

    printf("Enter a number for delete:\n");
    int num;
    scanf("%d",&num);

    int previousLink=-1;  //previousLink means previous ptr in the loop.
    while(ptr!=-1){
        if(data[ptr]==num){
            if(previousLink==-1){
                start=link[ptr];
                break;
            }
            else{
                link[previousLink]=link[ptr];
                break;
            }
        }
        previousLink=ptr;
        ptr=link[ptr];
    }
    if(ptr==-1)printf("This number was not in the list before!\n");
    else{
        printf("After delete:\n");
        ptr=start;
        while(ptr!=-1){
            printf("%d ",data[ptr]);
            ptr=link[ptr];
        }
    }
}
