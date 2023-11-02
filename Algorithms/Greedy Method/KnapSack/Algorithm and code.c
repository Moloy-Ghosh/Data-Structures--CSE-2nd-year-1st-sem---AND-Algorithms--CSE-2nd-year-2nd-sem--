/*
Algorithm GreedyKnapsack(m,n)
//p[1:n] and w[1:n] contain the profit and weights respectively
//of the n objects ordered such that p[i]/w[i]>=p[i+1]/w[i+1]
//m is the knapsack size and x[1:n] is the solution vector
{
    for(i:=1 to n) do
        x[i]:=0.0; //Initialize x
    U:=m;
    for (i:=1 to n) do
    {
        if(w[i]>U) then break;
        x[i]:=1.0; U:=U-w[i];
    }
    if(i<=n) then x[i]:=U/w[i];
}
*/

/*
Sort the items according to the non-increasing order of the profit per unit weight.
Initialize weight taken as wt-taken=0;
If wt-taken plus weight of an item is less than the capacity (cap) of the knapsack.
    i) take the item; find total weight taken and total value.
    ii) otherwise find remaining weight as rwt = cap – wt-taken and value for remaining weight. Add this value to total value.
4. Output total value;

*/
#include <stdio.h>

void GreedyKnapsack(int n, double m, double p[], double w[], double x[]) {
    int i;
    for (i = 0; i < n; i++) {
        x[i] = 0.0; // Initialize x
    }
    double U = m;
    for (i = 0; i < n; i++) {
        if (w[i] > U) {
            break;
        }
        x[i] = 1.0;
        U -= w[i];
    }
    if (i < n) {
        x[i] = U / w[i];
    }
}

int main() {
    int n = 4; // Number of objects
    double m = 10.0; // Knapsack size
    double p[] = {40.0, 30.0, 50.0, 10.0}; // Profits
    double w[] = {2.0, 5.0, 10.0, 5.0}; // Weights
    double x[n];

    GreedyKnapsack(n, m, p, w, x);

    printf("Solution vector x: ");
    for (int i = 0; i < n; i++) {
        printf("%.2f ", x[i]);
    }
    printf("\n");

    return 0;
}
