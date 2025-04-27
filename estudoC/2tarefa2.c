#include <stdio.h>

int main() {
    int numero;
    int positivos = 0;
    int negativos = 0;

    printf("Digite números inteiros (0 para parar):\n");

    while (1) {
        scanf("%d", &numero);

        if (numero == 0) {
            break; // Encerra o loop
        }

        if (numero > 0) {
            positivos++;
        } else {
            negativos++;
        }
    }

    printf("\nQuantidade de números positivos: %d\n", positivos);
    printf("Quantidade de números negativos: %d\n", negativos);

    return 0;
}
