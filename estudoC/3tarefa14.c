#include <stdio.h>

int main() {

    int matriz[3][3] = {{1, 2, 3},{4, 5, 6},{7, 8, 9}};
    int linha[3] = {0};
    int coluna[3] = {0};
    int i, j;

    printf("Matriz 3x3:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            linha[i] += matriz[i][j]; 
            coluna[j] += matriz[i][j]; 
        }
    }

    printf("\nsoma das linhas:\n");
    for (i = 0; i < 3; i++) {
        printf("linha %d: %d\n", i + 1, linha[i]);
    }

    printf("\nsoma das colunas:\n");
    for (j = 0; j < 3; j++) {
        printf("coluna %d: %d\n", j + 1, coluna[j]);
    }

    return 0;
}