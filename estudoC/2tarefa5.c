#include <stdio.h>
#include <stdlib.h>

int main(){
    int A, B;
    int result = 1;
    int cont = 0;

    printf("digite os valores de A e B: ");
    scanf("%d %d", &A, &B);

    if(B < 0){
        printf("numero negativo invaido");
        return 0;
    }
    while(cont < B){
        result = result * A;
        cont++;
    }
    printf("o resultado: %d",result);
    return 0;
}