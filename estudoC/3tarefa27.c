#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MAX 30

void mostra_matriz(int m, int n, int matriz[][MAX]) {
    int i, j;
    printf("matriz %dx%d:\n", m, n);
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%4d ", matriz[i][j]);
        }
        printf("\n");
    }
}

void cria_matriz(int m, int n, int matriz[][MAX]) {
    int i, j;
    static int semente = 12345; 
    srand(semente);
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            matriz[i][j] = (rand() % 11) - 5; 
        }
    }
    semente += 1000; 
}

void mult_mat(int m, int n, int p, int q, int matriz_a[][MAX], int matriz_b[][MAX], int matriz_produto[][MAX]) {
    int i, j, k;

   
    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
            matriz_produto[i][j] = 0;
        }
    }

    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
            for (k = 0; k < n; k++) {
                matriz_produto[i][j] += matriz_a[i][k] * matriz_b[k][j];
            }
        }
    }
}

int main() {
    int m, n, p, q;

    printf("digite o numero de linhas de a: ");
    scanf("%d", &m);
    printf("digite o numero de colunas de a: ");
    scanf("%d", &n);
    printf("digite o numero de linhas de b: ");
    scanf("%d", &p);
    printf("digite o numero de colunas de b: ");
    scanf("%d", &q);

    int matriz_a[MAX][MAX], matriz_b[MAX][MAX], matriz_produto[MAX][MAX];

    cria_matriz(m, n, matriz_a);
    printf("\nmatriz a:\n");
    mostra_matriz(m, n, matriz_a);

    cria_matriz(p, q, matriz_b);
    printf("\nmatriz b:\n");
    mostra_matriz(p, q, matriz_b);

    printf("\nresultado da multiplicacao a x b:\n");
    mult_mat(m, n, p, q, matriz_a, matriz_b, matriz_produto);
    mostra_matriz(m, q, matriz_produto);

    return 0;
}