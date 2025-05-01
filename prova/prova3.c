#include <stdio.h>

int main(){
    int C, F, num;
    char texto;
    printf("esse valor esta em Celsius ou Farenheit?(digite C ou F): ");
    scanf("%c", &texto);

    printf("digite o valor: ");
    scanf("%d", &num);
   
    if(texto == 'C'){
        C = num;
        F = (9 * C/5) + 32;
        printf("a convercao de %dC para Farenheit e: %d", C, F);
    } else  if( texto == 'F'){
            F = num;
            C = 5 * (F - 32)/9;
            printf("a convercao de %dF para Celsius e: %d", F, C);
         }
    
}