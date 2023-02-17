#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[20]={1,3,4,6,8,10,13,23,26,39,51,55,57,59,63,77,79,81,85,99}; //sorted array.
    int n=20;
    int item;
    printf("Enter item:\n");
    scanf("%d",&item);

    int low=0;
    int high=n-1;
    int mid=(low+high)/2;
    while(low<=high && arr[mid]!=item){
        if(item<arr[mid]) high=mid-1;
        else low=mid+1;
        mid=(low+high)/2;
    }

    if(arr[mid]==item)printf("The location of item is = %d\n",mid+1);
    else printf("Not found.\n");
}
