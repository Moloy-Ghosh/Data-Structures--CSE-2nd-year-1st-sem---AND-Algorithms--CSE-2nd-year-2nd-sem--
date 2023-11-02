/*
Algorithm: Activity selection
Step 1: Sort fi into nondecreasing order. After sorting, f1 <= f2 <= f3 <= … <= fn.
Step 2: Add the next activity i to the solution set if i is compatible with each in the solution set.
Step 3: Stop if all activities are examined. Otherwise, go to step 2.

Time complexity: O(nlog2n)

Greedy_Activity_Selector(s, f)
   {
       n = length[S];
       A = {1};
       j= 1;
       for (i =2 to n)
          {
          if (s[i]>= f[j]);
           A = A U {i};
           j = i;
          Return A;
     }

*/


#include <stdio.h>
#include <stdlib.h>

void ActivitySelection(int s[],int f[],int n)
{
    printf("%d ",1);
    for(int i=1,j=0;i<n;i++){
        if(s[i]>=f[j]){
            printf("%d ",(i+1));
            j=i;
        }
    }
}
int main()
{
    int n=11;
    int s[]={1,3,0,5,3,5,6,8,8,2,12};
    int f[]={4,5,6,7,8,9,10,11,12,13,14};
    ActivitySelection(s,f,n);
}
