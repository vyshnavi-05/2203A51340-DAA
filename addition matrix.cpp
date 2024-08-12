#include <stdio.h>

int main() {
    int rows, columns, i, j;

   
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &columns);

    int matrix1[rows][columns], matrix2[rows][columns], sum[rows][columns];

    // first
    printf("Enter elements of the first matrix:\n");
    for (i = 0; i < rows; i++)
        for (j = 0; j < columns; j++)
            scanf("%d", &matrix1[i][j]);

    
    printf("Enter elements of the second matrix:\n");
    for (i = 0; i < rows; i++)
        for (j = 0; j < columns; j++)
            scanf("%d", &matrix2[i][j]);

    
    for (i = 0; i < rows; i++)
        for (j = 0; j < columns; j++)
            sum[i][j] = matrix1[i][j] + matrix2[i][j];


    printf("Resulting matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < columns; j++)
            printf("%d ", sum[i][j]);
        printf("\n");
    }

    return 0;
}

