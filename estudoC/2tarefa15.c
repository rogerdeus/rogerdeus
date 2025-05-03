#include <stdio.h>
#include <math.h>

int main() {
    float razao, terceiro, primeiro, termo, soma;
    int n, i;

    printf("Digite a razao da PG: ");
    scanf("%f", &razao);

    printf("Digite o terceiro termo da PG: ");
    scanf("%f", &terceiro);

    primeiro = terceiro / (razao * razao);

    do {
        printf("Digite o numero de termos (maior que 3): ");
        scanf("%d", &n);
    } while (n <= 3);

    printf("Os %d primeiros termos da PG sao:\n", n);
    termo = primeiro;
    for (i = 0; i < n; i++) {
        printf("%.2f ", termo);
        termo *= razao;
    }
    printf("\n");

    if (razao != 1) {
        soma = primeiro * (1 - pow(razao, n)) / (1 - razao);
    } else {
        soma = n * primeiro;
    }
    printf("A soma dos %d primeiros termos da PG eh: %.2f\n", n, soma);

    return 0;
}