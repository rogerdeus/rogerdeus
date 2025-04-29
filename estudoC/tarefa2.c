#include <stdio.h>

int main(){
    char texto[10], texto2[10];
    
    printf("insira seu primeiro nome: ");
    scanf("%s", texto);

    printf("insira seu sobrenome: ");
    scanf("%s", texto2);

    printf("seu nome e: %s %s", texto, texto2);
    return 0;
}