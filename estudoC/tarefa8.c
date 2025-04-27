#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){


    float A, B, C, D, buba, xeno, poka;

    printf("coloque os valores A B C D: ");
    scanf("%f %f %f %f", &A, &B, &C, &D);

    buba = (A + B + C + D)/4;
    xeno = pow(A * B * C * D,0.25);
    poka = 4/(1/A + 1/B + 1/C + 1/D);

    printf("\n media %.2f \n geometrica %.2f \n harmonica %.2f", buba, xeno, poka);

    return 0;
}