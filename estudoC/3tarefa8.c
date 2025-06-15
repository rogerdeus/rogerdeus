#include <stdio.h>
#include <stdlib.h>

int main() {
    double arr[10] = {5.5, -3.2, 0.0, 12.7, -8.1, 4.0, -0.9, 0.0, 9.3, -6.4};
    double posi[10]; 
    double neg[10];
    int i, pc = 0, nc = 0;

    printf("array: ");
    for(i = 0; i <10; i++){
        printf("%.1f ",arr[i]);
    }
    
   for (i = 0; i < 10; i++) {
        if (arr[i] > 0) {
            posi[pc++] = arr[i];
        } 
        else if (arr[i] < 0) {
            neg[nc++] = arr[i];
        }
    }
    printf("\narray positiva: ");
    for(i = 0; i < pc; i++){
    printf("%.1f ",posi[i]);
    }
    printf("\narray negativa: ");
    for( i = 0; i < nc; i++){
        printf("%.1f ", neg[i]);
    }
}