#include <stdio.h>

int main() {
    int numero;
    int positivos = 0;
    int negativos = 0;

    printf("Digite numeros inteiros (0 para parar): ");

   
    scanf("%d", &numero);

   
    while (numero != 0) {
        if (numero > 0) {
            positivos++;
        } else if (numero < 0) {
            negativos++;
        }

        
        scanf("%d", &numero);
    }
    if(positivos > negativos){
        printf("\nha mais positivos");

    } else{
        if(positivos < negativos){
            printf("\nha mais negativos");
        } else{
            if(positivos == negativos){
                printf("\nha a mesma quantidade");
            }
        }
    } 

    printf("\nQuantidade de numeros positivos: %d", positivos);
    printf("\nQuantidade de numeros negativos: %d", negativos);

    return 0;
}