#include <stdio.h>
#include <math.h>

int main() {
    float valor, juros, montante;
    int n, mes;

    printf("Digite o valor: ");
    scanf("%f", &valor);

    printf("Digite o juros mensal: ");
    scanf("%f", &juros);
    juros = juros / 100;

    printf("Digite o periodo em meses: ");
    scanf("%d", &n);

    printf("\nEvolucao do montante ao longo dos %d meses:\n", n);
    for (mes = 1; mes <= n; mes++) {
        montante = valor * pow(1 + juros, mes);
        printf("Mes %d: %.2f\n", mes, montante);
    }

    return 0;
}