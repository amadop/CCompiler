#include <stdio.h>

void addMatrices(int rows, int cols, int a[rows][cols], int b[rows][cols], int result[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = a[i][j] + b[i][j];
        }
    }
}

void printMatrix(int rows, int cols, int matrix[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

double determinant2x2(int matrix[2][2]) {
    return (matrix[0][0] * matrix[1][1]) - (matrix[0][1] * matrix[1][0]);
}

int main() {
    int rows = 3, cols = 2;
    int array1[3][2];
    int array2[3][2];
    int array3[3][2];
    int n = 1;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            array1[i][j] = 3 * n + 1;
            n++;
        }
    }

    n = 1;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            array2[i][j] = n * n;
            n++;
        }
    }

    addMatrices(rows, cols, array1, array2, array3);

    printf("Matrix 1 (3n + 1):\n");
    printMatrix(rows, cols, array1);

    printf("\nMatrix 2 (n^2):\n");
    printMatrix(rows, cols, array2);

    printf("\nResult of Matrix Addition (array1 + array2):\n");
    printMatrix(rows, cols, array3);

    int matrix1[2][2] = { {1, 2}, {3, 6} };
    int matrix2[2][2] = { {6, 3}, {9, 2} };
    double det;

    printf("\n\n--- Determinant Calculations ---\n");

    det = determinant2x2(matrix1);
    printf("Matrix 1:\n");
    printMatrix(2, 2, matrix1);
    if (det == 0)
        printf("Determinant = %.2f → Non-invertible matrix.\n\n", det);
    else
        printf("Determinant = %.2f → Invertible matrix.\n\n", det);

    det = determinant2x2(matrix2);
    printf("Matrix 2:\n");
    printMatrix(2, 2, matrix2);
    if (det == 0)
        printf("Determinant = %.2f → Non-invertible matrix.\n", det);
    else
        printf("Determinant = %.2f → Invertible matrix.\n", det);

    return 0;
}
