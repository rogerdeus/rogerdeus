#include <stdio.h>

int main() {
    float razao, quarto, primeiro, ultimo, soma;
    int n;

    
    printf("Digite a razao da PA: ");
    scanf("%f", &razao);

    
    printf("Digite o quarto termo da PA: ");
    scanf("%f", &quarto);

    
    primeiro = quarto - 3 * razao;

    
    do {
        printf("Digite o numero de termos (positivo): ");
        scanf("%d", &n);
    } while (n <= 0);

    ultimo = primeiro + (n - 1) * razao;

    soma = n * (primeiro + ultimo) / 2;

    printf("A soma dos %d primeiros termos da PA eh: %.2f\n", n, soma);

    return 0;
}