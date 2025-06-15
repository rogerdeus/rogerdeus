#include <stdio.h>

void mostra_tabuleiro(int matriz[3][3]) {
    int i, j;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%3d", matriz[i][j]);
            if (j < 2) {
                printf(" |");
            }
        }
        printf("\n");
        if (i < 2) {
            printf("---+---+---\n");
        }
    }
}

int main() {
    int matriz[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    mostra_tabuleiro(matriz);
    printf("\n");
    return 0;
}