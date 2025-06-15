#include <stdio.h>
#include <math.h>

double Hipotenusa(double cateto1, double cateto2) {
    return sqrt(cateto1 * cateto1 + cateto2 * cateto2);
}

int main() {
    double cateto1, cateto2;

    printf("digite o valor do cateto 1: ");
    scanf("%lf", &cateto1);
    
    printf("digite o valor do cateto 2: ");
    scanf("%lf", &cateto2);

    double hipotenusa = Hipotenusa(cateto1, cateto2);
    printf("a hipotenusa e: %.2f\n", hipotenusa);

    return 0;
}