#include <stdio.h>

int main() {
    int primeiro_termo, razao, n, i, termo;

    
    printf("Digite o primeiro termo da PA: ");
    scanf("%d", &primeiro_termo);

    printf("Digite a razão da PA: ");
    scanf("%d", &razao);

    printf("Digite quantos termos deseja exibir: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("erro\n");
        return 1; 
    }

    printf("\nOs %d primeiros termos da PA são:\n", n);
    for (i = 0; i < n; i++) {
        termo = primeiro_termo + i * razao;
        printf("%d\n", termo);
    }

    return 0;
}
