//Bubble sort
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int arr[10]={13,99,45,2,0,55,14,74,39,55};
    int len=10;
    for(int step=0;step<len;step++){
        for(int i=0;i<len-step-1;i++){
            if(arr[i]>arr[i+1]){
                int tem=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=tem;
            }
        }
    }

    printf("Output: ");
    for(int i=0;i<len;i++){
        printf("%d ",arr[i]);
    }
}
