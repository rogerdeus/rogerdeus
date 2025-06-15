#include <stdio.h>
#include <stdlib.h>
#include <math.h>

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

void mult_por_escalar(int m, int n, int matriz_a[][n], int matriz_resultado[][n], double escalar) {
    int i, j;
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            matriz_resultado[i][j] = (int)(matriz_a[i][j] * escalar); 
        }
    }
}

int main() {
    int m, n;
    double escalar;

    printf("digite o numero de linhas: ");
    scanf("%d", &m);
    printf("digite o numero de colunas: ");
    scanf("%d", &n);
    printf("digite o valor do escalar: ");
    scanf("%lf", &escalar);

    int matriz_a[100][100], matriz_resultado[100][100]; 

    cria_matriz(m, n, matriz_a);
    printf("\nmatri:\n");
    mostra_matriz(m, n, matriz_a);

    mult_por_escalar(m, n, matriz_a, matriz_resultado, escalar);
    printf("\nmatriz resultado multiplicacao %.2f:\n", escalar);
    mostra_matriz(m, n, matriz_resultado);

    return 0;
}