#include <stdio.h>
#include <math.h>

void mostra_matriz(int m, int n, int matriz[][n]) {
    int i, j;
    printf("Matriz %dx%d:\n", m, n);
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%4d ", matriz[i][j]); 
        }
        printf("\n");
    }
}

int main() {

    int m = 3, n = 4;
    int matriz[3][4] = {{1, 2, 3, 4},{5, 6, 7, 8},{9, 10, 11, 12}};

    mostra_matriz(m, n, matriz);

    return 0;
}