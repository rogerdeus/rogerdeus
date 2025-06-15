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

int verifica_vencedor(char tabuleiro[3][3]) {
    int i, j;

    // verifica linhas
    for (i = 0; i < 3; i++) {
        if (tabuleiro[i][0] == tabuleiro[i][1] && tabuleiro[i][1] == tabuleiro[i][2] && tabuleiro[i][0] != ' ') {
            if (tabuleiro[i][0] == 'x') {
                return 1;
            } else {
                return 2;
            }
        }
    }

    // verifica colunas
    for (j = 0; j < 3; j++) {
        if (tabuleiro[0][j] == tabuleiro[1][j] && tabuleiro[1][j] == tabuleiro[2][j] && tabuleiro[0][j] != ' ') {
            if (tabuleiro[0][j] == 'x') {
                return 1;
            } else {
                return 2;
            }
        }
    }

    // verifica diagonal principal
    if (tabuleiro[0][0] == tabuleiro[1][1] && tabuleiro[1][1] == tabuleiro[2][2] && tabuleiro[0][0] != ' ') {
        if (tabuleiro[0][0] == 'x') {
            return 1;
        } else {
            return 2;
        }
    }

    // verifica diagonal secundária
    if (tabuleiro[0][2] == tabuleiro[1][1] && tabuleiro[1][1] == tabuleiro[2][0] && tabuleiro[0][2] != ' ') {
        if (tabuleiro[0][2] == 'x') {
            return 1;
        } else {
            return 2;
        }
    }

    return 0;
}

int main() {
    char tabuleiro[3][3] = {
        {'x', 'o', 'x'},
        {' ', 'o', ' '},
        {'x', ' ', 'o'}
    };
    int resultado;

    mostra_tabuleiro(tabuleiro);
    printf("\n");
    resultado = verifica_vencedor(tabuleiro);
    if (resultado == 1) {
        printf("vencedor 'x'\n");
    } else if (resultado == 2) {
        printf("vencedor 'o'\n");
    } else {
        printf("sem vencedor\n");
    }

    return 0;
}