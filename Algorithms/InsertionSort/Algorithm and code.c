/*

InsertionSort(a,n)
{
    for j:=2 to n do
    {
        //a[1:j-1] is already sorted.
        item:=a[j];
        i:=j-1;
        while((i>=1) and (item<a[i])) do
        {
            a[i+1]:=a[i];
            i:=i-1;
        }
        a[i+1]:=item;
    }
}

*/


#include <stdio.h>

int n;
int arr[100];

void InsertionSort(int a[],int n)
{
    int item,i;
    for(int j=1;j<n;j++){
        item=a[j];
        i=j-1;
        while((i>=0) && (item<a[i]))
        {
            a[i+1]=a[i];
            i=i-1;
        }
        a[i+1]=item;
    }
}

int main()
{
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    InsertionSort(arr,n);
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
