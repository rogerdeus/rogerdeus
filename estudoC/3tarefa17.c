#include <stdio.h>

void chamada(char nome[]){
    printf("bom dia %s", nome);
}

int main(){
    char nome[10];
    printf("insira seu nome: ");
    scanf("%s",nome);
    chamada(nome);

    return 0;
}