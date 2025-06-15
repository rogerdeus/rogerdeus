#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void cria_matriz(int matriz_a[][3], int matriz_b[][3], int linhas, int colunas, int max, int min) {
    int i, j;
    static int semente = 12345;
    srand(semente);
    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            matriz_a[i][j] = (rand() % (max - min + 1)) + min;
        }
    }
    semente += 1000;
    srand(semente);
    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            matriz_b[i][j] = (rand() % (max - min + 1)) + min;
        }
    }
}

void soma_matrizes(int somado[][3], int matriz_a[][3], int matriz_b[][3], int linhas, int colunas) {
    int i, j;
    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            somado[i][j] = matriz_a[i][j] + matriz_b[i][j];
        }
    }
}

void mostra_matriz(int somado[][3], int matriz_a[][3], int matriz_b[][3], int linhas, int colunas) {
    int i, j;
    printf("matriz a\n");
    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            printf("%3d ", matriz_a[i][j]);
        }
        printf("\n");
    }
    printf("\nmatriz b\n");
    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            printf("%3d ", matriz_b[i][j]);
        }
        printf("\n");
    }
    printf("\nmatriz a + matriz b\n");
    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            printf("%3d ", somado[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int linhas = 3;
    int colunas = 3;
    int matriz_a[3][3];
    int matriz_b[3][3];
    int somado[3][3];
    int min = 1;
    int max = 10;

    cria_matriz(matriz_a, matriz_b, linhas, colunas, max, min);
    soma_matrizes(somado, matriz_a, matriz_b, linhas, colunas);
    mostra_matriz(somado, matriz_a, matriz_b, linhas, colunas);

    return 0;
}