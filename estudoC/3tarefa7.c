#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int arr[6];
    int i;

    printf("insira 6 numeros inteiros: ");

    for(i = 0; i < 6; i++){
       scanf(" %d", &arr[i]);
    }

    for( i = 5; i >= 0; i--){
        printf("%d ", arr[i]);
    }
    
}