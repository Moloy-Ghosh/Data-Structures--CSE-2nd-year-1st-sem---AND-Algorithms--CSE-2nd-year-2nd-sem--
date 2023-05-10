#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[100000];
    int n;
    printf("Enter the total elements of the array:\n");
    scanf("%d",&n);
    printf("Enter the elements:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                int tem=arr[i];
                arr[i]=arr[j];
                arr[j]=tem;
            }
        }
    }
    printf("After shorting:\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
