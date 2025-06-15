#include <stdio.h>
int main(){
    int arr[8];
    int i, som=0;
    float media;

    printf("insira 8 numeros:\n");

    for(i=0; i<=7; i++){
        printf(" N%d: ", i+1);
        scanf("%d", &arr[i]);
        som = arr[i] + som;
    }

    printf("numeros acima da media:\n ");
    media=som/8;
    for(i=0; i<=7; i++){
        if(arr[i] > media){
            printf("%d ", arr[i]);
        }
    }
    return 0;
}
