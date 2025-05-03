#include <stdio.h>

int main() {
    float razao, terceiro, primeiro;
    int n, i;

    
    printf("Digite a razao da PA: ");
    scanf("%f", &razao);

    
    printf("Digite o terceiro termo da PA: ");
    scanf("\n%f", &terceiro);

    
    primeiro = terceiro - 2 * razao;

    do {
        printf("Digite o numero de termos (maior que 3): ");
        scanf("\n%d", &n);
    } while (n <= 3);

    printf("Os %d primeiros termos da PA sao:\n", n);
    for (i = 0; i < n; i++) {
        printf("\n%.2f ", primeiro + i * razao);
    }
    printf("\n");

    return 0;
}