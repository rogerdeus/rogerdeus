#include <stdio.h>

int main() {
    float razao, primeiro, termo;
    int n, i;

    printf("Digite a razao da PG: ");
    scanf("%f", &razao);

    printf("Digite o primeiro termo da PG: ");
    scanf("%f", &primeiro);

    do {
        printf("Digite o numero de termos (positivo): ");
        scanf("%d", &n);
    } while (n <= 0);

    printf("Os %d primeiros termos da PG sao:\n", n);
    termo = primeiro;
    for (i = 0; i < n; i++) {
        printf("%.2f ", termo);
        termo *= razao;
    }
    printf("\n");

    return 0;
}