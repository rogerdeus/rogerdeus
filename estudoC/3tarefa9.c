#include <stdio.h>
#include <math.h>

int main(){
    int arr[8] = {25, 20, 40, 55, 64, 79, 81, 92};
    int a[8], b[8];
    float raiz[8];
    int i;

    for(i = 0; i < 8; i++){
        raiz[i] = sqrt(arr[i]);
        a[i] = ceil(raiz[i]);
        b[i] = floor(raiz[i]);
    }

    printf("\n arredonda para cima: ");

    for(i = 0; i < 8; i++){
        printf("%d ",a[i]);
    }

    printf("\n arredonda para baixo: ");

    for(i = 0; i < 8; i++){
        printf("%d ",b[i]);
    }


}