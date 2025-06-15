#include <stdio.h>
#include <stdlib.h>

int main(){
    int arr[10] = {3, 45, 80, 10, 2, 4, 6, 5, 7, 9};
    int i, j = 10;
    int maior, menor;

    maior = arr[0];
    menor = arr[0];

    for(i = 0; i < j; i++){
        if(arr[i] > maior){
            maior = arr[i];
        }
        if(arr[i] < menor){
            menor = arr[i];
        }
    }

    printf("\n o maior numero: %d",maior);
    printf("\n o menor numero: %d", menor);

    return 0;
}