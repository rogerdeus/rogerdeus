#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(){

    float valor , desconto, vldc;
    printf("coloque o valor do produto: ");
    scanf("%f", &valor);
    desconto = valor * 0.2;

    printf("\nvalor = R$%.2f",valor);
    printf("\ndesconto = 20 porcento");
    printf("\nvoce recebeu = R$%.2f de desconto",desconto);
    vldc = valor - desconto;

    printf("\nvalor com desconto e R$%.2f",vldc);


}