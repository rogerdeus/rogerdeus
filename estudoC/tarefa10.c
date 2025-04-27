#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){


    int A, B, C;

    printf("coloque os valores A B C: ");
    scanf("%d %d %d", &A, &B, &C);
     int maior = A;

     if(B> maior){
        maior = B;
     }
     if(C > maior){
        maior = C;
     }
     printf("\no maior valor e:%d",maior);

    return 0;
}