#include <stdio.h>

void mostra_tabuleiro(char tabuleiro[3][3]) {
    int i, j;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf(" %c ", tabuleiro[i][j]);
            if (j < 2) {
                printf("|");
            }
        }
        printf("\n");
        if (i < 2) {
            printf("---+---+---\n");
        }
    }
}

int main() {
    char tabuleiro[3][3] = {
        {'x', 'o', 'x'},
        {' ', 'o', ' '},
        {'x', ' ', 'o'}
    };
    mostra_tabuleiro(tabuleiro);
    printf("\n");
    return 0;
}