#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[20]={3,5,20,44,22,29,84,1,30,41,31,43,90,97,85,55,64,23,78,99};
    int size=20;
    printf("Enter item to search:\n");
    int item;
    scanf("%d",&item);
    int loc=-1;
    for(int i=0;i<size;i++){
        if(arr[i]==item){
            loc=i+1;
            break;
        }
    }
    if(loc==-1)printf("Item not found!\n");
    else printf("The location of item is = %d\n",loc);
}
