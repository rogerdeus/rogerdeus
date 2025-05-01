#include <stdio.h>

int main() {
    int n, i, j;
    int largura_maxima,espacos_entre,espacos_esquerda;

    do {
        printf("Digite o numero de linhas (maior que 5): ");
        scanf("%d", &n);
        if (n <= 5) {
            printf("Erro: O numero deve ser maior que 5.\n");
        }
    } while (n <= 5);

    largura_maxima = 2 + (2 * (n - 1) - 1); 

 
    for (i = 1; i <= n; i++) {

     espacos_entre = (i == n) ? 0 : (2 * (n - i) - 1); 

      
         espacos_esquerda = (largura_maxima - (2 + espacos_entre)) / 2;
        if (i == n) {
         espacos_esquerda = (largura_maxima - 1) / 2; 
        }

       
        for (j = 0; j < espacos_esquerda; j++) {
            printf(" ");
        }

      
        if (i == n) {
            printf("*"); 
        } else {
            printf("*"); 
            for (j = 0; j < espacos_entre; j++) {
                printf(" "); 
            }
            printf("*"); 
        }

    
        printf("\n");
    }

    return 0;
}