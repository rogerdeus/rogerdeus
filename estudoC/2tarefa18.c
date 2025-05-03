#include <stdio.h>
#include <math.h>

int main() {
    int n, i;
    float soma = 0, media, soma_dif_quadrados = 0, desvio, nota;

    printf("Digite o numero de provas: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Digite a nota %d: ", i + 1);
        scanf("%f", &nota);
        soma = soma + nota;
    }

    media = soma / n;

    for (i = 0; i < n; i++) {
        printf("Digite novamente a nota %d: ", i + 1);
        scanf("%f", &nota);
        soma_dif_quadrados = soma_dif_quadrados + pow(nota - media, 2);
    }

    desvio = sqrt(soma_dif_quadrados / n);

    printf("Media das notas: %.2f\n", media);
    printf("Desvio padrao das notas: %.2f\n", desvio);

    return 0;
}