#include <stdio.h>

int main() {
    int rows = 3;
    int cols = 2;
    int array1[3][2];
    int array2[3][2];
    int array3[3][2];
    int n = 1;

    // Fill array1 with (3n + 1)
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            array1[i][j] = 3 * n + 1;
            n++;
        }
    }

    n = 1; // reset n for second matrix

    // Fill array2 with (n^2)
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            array2[i][j] = n * n;
            n++;
        }
    }

    // Add corresponding elements and store in array3
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            array3[i][j] = array1[i][j] + array2[i][j];
        }
    }

    // Print all arrays
    printf("Array 1 (3n + 1):\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", array1[i][j]);
        }
        printf("\n");
    }

    printf("\nArray 2 (n^2):\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", array2[i][j]);
        }
        printf("\n");
    }

    printf("\nArray 3 (array1 + array2):\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", array3[i][j]);
        }
        printf("\n");
    }

    return 0;
}
