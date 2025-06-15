#include <stdio.h>

int main() {
    int arr[10];
    int i, temp;

    printf("digite 10 numeros:\n");
    for (i = 0; i < 10; i++) {
        printf("elemento %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("\narray: ");
    for (i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    temp = arr[9]; 
    for (i = 9; i > 0; i--) {
        arr[i] = arr[i - 1]; 
    }
    arr[0] = temp; 

    printf("array rotacionado: ");
    for (i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}