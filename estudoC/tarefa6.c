#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(){

    float valor , desconto, vldc,multi;
    int porcentagem;
    printf("coloque o valor do produto: ");
    scanf("%f", &valor);
    printf("coloque a porcentagem de desconto: ");
    scanf("%d", &porcentagem);
    multi = porcentagem/100.0;
    
    desconto = valor * multi;

    printf("\nvalor = R$%.2f",valor);
    printf("\ndesconto = %d porcento",porcentagem);
    printf("\nvoce recebeu = R$%.2f de desconto",desconto);
    vldc = valor - desconto;

    printf("\nvalor com desconto e R$%.2f",vldc);

    return 0;
}