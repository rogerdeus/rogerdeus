#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){


    float A, B, C, D, buba, xeno, poka;

    printf("coloque os valores A B C D: ");
    scanf("%f %f %f %f", &A, &B, &C, &D);

    buba = (A + B + C + D)/4;
    xeno = pow(A - buba,2) + pow(B - buba,2) + pow(C - buba,2) + pow(D - buba,2)/4;
    poka = sqrt(xeno);

    printf("\n media %.2f \n varianca %.2f \n desvio padrao %.2f", buba, xeno, poka);

    return 0;
}