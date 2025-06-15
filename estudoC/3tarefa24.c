#include <stdio.h>
#include <stdlib.h>

void mostra_matriz(int m, int n, int matriz[][n]) {
    int i, j;
    printf("matriz %dx%d:\n", m, n);
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%4d ", matriz[i][j]);
        }
        printf("\n");
    }
}

void cria_matriz(int m, int n, int matriz[][n]) {
    int i, j;
    srand(12345);
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            matriz[i][j] = (rand() % 11) - 5; 
        }
    }
}

int main() {
    int m, n;


    printf("digite o numero de linhas: ");
    scanf("%d", &m);
    printf("digite o numero de colunas: ");
    scanf("%d", &n);


    if (m <= 0 || n <= 0) {
        printf("numero de linhas e colunas deve ser maior que 0.\n");
        return 1;
    }

    int matriz[100][100];
    cria_matriz(m, n, matriz);
    mostra_matriz(m, n, matriz);

    return 0;
}