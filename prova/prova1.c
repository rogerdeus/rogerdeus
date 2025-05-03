#include <stdio.h>

int main(){
    int num,dif,fut;

    printf("insira seu ano de nascimento: ");
    scanf("%d",&num);

    dif = 2025 - num;
    printf("\nsua iadade no dia 31 de dezembro e:%d",dif);

    fut = 50 - dif;
    if(fut > 0){
        printf("\nvoce fara 50 anos em: %d",2025 + fut);
    } else{
        printf("\nvoce fez 50 anos em: %d",2025 + fut);
    }




}