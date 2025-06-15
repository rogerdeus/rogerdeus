#include <stdio.h>

int main() {
    int arr[20] = {3, 7, 2, 8, 5, 4, 6, 3, 9, 1, 2, 7, 5, 4, 8, 6, 3, 2, 9, 1};
    int freq[10] = {0};
    int i;

    printf("Array: ");
    for (i = 0; i < 20; i++) {
        printf("%d ", arr[i]);
    }

    for (i = 0; i < 20; i++) {
        freq[arr[i]]++;
    }

    printf("\nfrequencia dos numeros:\n");
    for (i = 1; i < 10; i++) {
        if (freq[i] > 0) {
            printf("Numero %d aparece %d vezes\n", i, freq[i]);
        }
    }

    return 0;
}