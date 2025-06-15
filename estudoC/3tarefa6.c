#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    double arr[10] = {8, 24, 32, 4, 81, 16, 64, 144, 25, 10};
    double raiz[10];
    int i, j = 10;

    printf("\nvalores raiz:\n");

    for(i = 0; i < j; i++){
        raiz[i] = sqrt(arr[i]);
        printf(" %.2f",raiz[i]);
    }
}