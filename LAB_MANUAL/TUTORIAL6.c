#include <stdio.h>

int main() {
    int r, c, a[100][100], b[100][100], sum[100][100], mul[100][100], i, j;

    // Input the number of rows and columns for the matrices
    printf("Enter the number of rows (between 1 and 100): ");
    scanf("%d", &r);
    printf("Enter the number of columns (between 1 and 100): ");
    scanf("%d", &c);

    // Input elements of the first matrix row by row
    printf("\nEnter elements of 1st matrix (row-wise):\n");
    for (i = 0; i < r; ++i) {
        printf("Enter row %d elements: ", i + 1);
        for (j = 0; j < c; ++j) {
            scanf("%d", &a[i][j]);
        }
    }

    // Input elements of the second matrix row by row
    printf("\nEnter elements of 2nd matrix (row-wise):\n");
    for (i = 0; i < r; ++i) {
        printf("Enter row %d elements: ", i + 1);
        for (j = 0; j < c; ++j) {
            scanf("%d", &b[i][j]);
        }
    }

    // Adding two matrices
    for (i = 0; i < r; ++i) {
        for (j = 0; j < c; ++j) {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    // Multiplying two matrices element-wise
    for (i = 0; i < r; ++i) {
        for (j = 0; j < c; ++j) {
            mul[i][j] = a[i][j] * b[i][j];
        }
    }

    // Printing the sum of two matrices
    printf("\nSum of two matrices:\n");
    for (i = 0; i < r; ++i) {
        for (j = 0; j < c; ++j) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    // Printing the product of two matrices
    printf("\nMultiplication of two matrices (element-wise):\n");
    for (i = 0; i < r; ++i) {
        for (j = 0; j < c; ++j) {
            printf("%d ", mul[i][j]);
        }
        printf("\n");
    }

    return 0;
}
/* OUTPUT:-
Enter the number of rows (between 1 and 100): 3
Enter the number of columns (between 1 and 100): 3

Enter elements of 1st matrix (row-wise):
Enter row 1 elements: 1 2 3
Enter row 2 elements: 4 5 6
Enter row 3 elements: 7 8 9

Enter elements of 2nd matrix (row-wise):
Enter row 1 elements: 9 8 7
Enter row 2 elements: 6 5 4
Enter row 3 elements: 3 2 1

Sum of two matrices:
10 10 10 
10 10 10 
10 10 10 

Multiplication of two matrices (element-wise):
9 16 21 
24 25 24 
21 16 9 
*/
