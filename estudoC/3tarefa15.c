#include<stdio.h>
#include<stdlib.h>
#define MAX 10

int main(){
    int matriz[MAX][MAX];
    int i, j, n1, n2;

    srand(123456789);

    printf("digite o numero de linhas da sua matriz (max = 10): ");
    scanf("%d", &n1);

    printf("digite o numero de colunas da sua matriz (max = 10): ");
    scanf("%d", &n2);

    for(i = 0; i < n1; i++){
        for(j = 0; j < n2; j++){
            matriz[i][j]= (rand() % 10);
        }
    }

    printf("\n");

    for(i = 0; i < n1; i++){
        printf("|");
        for(j = 0; j < n2; j++){
            printf(" %d ", matriz[i][j]);
        }
        printf("|\n");
    }

    return 0;
}
