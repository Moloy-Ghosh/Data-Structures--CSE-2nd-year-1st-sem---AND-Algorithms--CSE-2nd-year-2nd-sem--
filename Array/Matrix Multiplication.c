#include <stdio.h>
#include <stdlib.h>

int main()
{
    int row1,col1,row2,col2;
    printf("Matrix Multiplication\n");
    printf("Enter the number of rows and columns of first matrix:\n");
    printf("Rows: ");
    scanf("%d",&row1);
    printf("Columns: ");
    scanf("%d",&col1);
    printf("Enter the number of rows and columns of second matrix:\n");
    printf("Rows: ");
    scanf("%d",&row2);
    printf("Columns: ");
    scanf("%d",&col2);
    if(col1!=row2) printf("Multiplication is not possible, first matrix's row and second matrix's columns should be equal.\n");
    else{
        int mat1[row1][col1],mat2[row2][col2],newmat[row1][col2];
        printf("Enter the elements of first matrix:\n");
        for(int i=0;i<row1;i++){
            for(int j=0;j<col1;j++){
                scanf("%d",&mat1[i][j]);
            }
        }
        printf("Enter the elements of second matrix:\n");
        for(int i=0;i<row2;i++){
            for(int j=0;j<col2;j++){
                scanf("%d",&mat2[i][j]);
            }
        }


        //Logic of multiplication:
        for(int i=0;i<row1;i++){
            for(int j=0;j<col2;j++){
                int tem=0;
                for(int c=0;c<col1;c++){
                    tem+=mat1[i][c]*mat2[c][j];
                }
                newmat[i][j]=tem;
            }
        }



        printf("New Matrix after multiplication:\n");
        for(int i=0;i<row1;i++){
            for(int j=0;j<col2;j++){
                printf("%d ",newmat[i][j]);
            }
            printf("\n");
        }
    }
}
