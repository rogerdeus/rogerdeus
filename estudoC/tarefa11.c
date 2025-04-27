#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int A, B, C;

    printf("Coloque os valores A, B, C: ");
    scanf("%d %d %d", &A, &B, &C);

    int maior, menor, meio; // Correção: adicionado o ponto e vírgula

    if (A <= B && A <= C) {
        menor = A;
        if (B <= C) {
            meio = B;
            maior = C;
        } else {
            meio = C;
            maior = B;
        }
    } else if (B <= A && B <= C) {
        menor = B;
        if (A <= C) {
            meio = A;
            maior = C;
        } else {
            meio = C;
            maior = A;
        }
    } else {
        menor = C;
        if (A <= B) {
            meio = A;
            maior = B;
        } else {
            meio = B;
            maior = A;
        }
    }

    printf("Valores em ordem crescente: %d, %d, %d\n", menor, meio, maior);

    return 0;
}