#include <stdio.h>

int main() {
    float deposito, juros, montante, juros_mes, montante_anterior;
    int n, mes;

    printf("Digite o valor depositado por mes: ");
    scanf("%f", &deposito);

    printf("Digite a taxa de juros mensal: ");
    scanf("%f", &juros);
    juros = juros / 100;

    printf("Digite o total de meses: ");
    scanf("%d", &n);

    montante = 0;
    printf("\nEvolucao do montante e juros ao longo dos %d meses:\n", n);
    for (mes = 1; mes <= n; mes++) {
        montante_anterior = montante;
        montante = (montante + deposito) * (1 + juros);
        juros_mes = (montante_anterior + deposito) * juros;
        printf("Mes %d: Montante = %.2f, Juros = %.2f\n", mes, montante, juros_mes);
    }

    return 0;
}