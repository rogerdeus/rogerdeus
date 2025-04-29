#include <stdio.h>

int main(){
    char texto[10];
    
    printf("insira seu primeiro nome: ");
    scanf("%s", &texto);

    printf("seu nome e: %s", texto);
    return 0;
}