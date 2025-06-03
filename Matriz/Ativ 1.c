#include <stdio.h>
#include <string.h>

int main() {
    int mat[3][3];
    int i, j;
    int soma = 0;
    int diagonal = 0;

    for (i = 0; i < 3; i++) {
        for (j = 0;j < 3; j++) {
            printf("Write a number [%d][%d]: ", i, j);
            scanf("%d", &mat[i][j]);
            soma += mat[i][j];
            if (i == j) {
                diagonal += mat[i][j];
            }
        }
    }
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d", mat[i][j]);
        }

    }
    printf("\n");
    printf("Matrix elements: \n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    printf("The sum is: %d \n", soma);
    printf("The main diagonal is: %d \n", diagonal);

    return 0;
}




