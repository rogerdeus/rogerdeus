#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    float A, B, C,media;

    printf("coloque os valores de A B C: ");
    scanf("%f %f %f", &A, &B, &C);
    media = (A + B + C)/3;
    printf("a media aritimetica %.2f",media);


    return 0; 
}