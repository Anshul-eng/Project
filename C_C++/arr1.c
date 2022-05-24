// Program to dynamically allocate a 2-D array..
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int **a,i,j,row,col;
    printf("Enter the no. of row and columns : ");
    scanf("%d%d", &row, &col);

    a= (int**) malloc(row*sizeof(int*));

    for(i=0; i<row; i++)
        a[i] = (int*) malloc(col*sizeof(int*));

        for( i=0; i<row; i++)
            {
                for( j=0; j<col; j++)
                {
                  printf("Enter a[%d][%d] : ",i,j);
                  scanf("%d",&a[i][j]);
                }
            }
            printf("The Matrix is : \n");
            for(i=0; i<row; i++)
            {
                for(j=0; j<col; j++)
                printf("%d",a[i][j]);
                printf("\n");
            }
            for( i=0; i<row; i++)
            free(a[i]);
            free(a);
            return 0;
}