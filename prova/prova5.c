#include <stdio.h>

int main() {
    int m, n, m_original, n_original;
    int mmc = 1, mdc = 1;
    int divisor = 2;

    do {
        printf("Insira um numero inteiro: ");
        scanf("%d", &m);
        printf("\nInsira um segundo numero inteiro: ");
        scanf("%d", &n);
        if (m <= 0 || n <= 0) {
            printf("\nErro\n");
        }
    } while (m <= 0 || n <= 0);

  
    m_original = m;
    n_original = n;


    printf("\n MMC:\n");


    while (m != 1 || n != 1) {

        printf("%d %d | %d\n", m, n, divisor);

        if (m % divisor == 0 && n % divisor == 0) {
            m = m / divisor;
            n = n / divisor;
            mmc *= divisor;
            mdc *= divisor;
        }else if (m % divisor == 0) {
            m = m / divisor;
            mmc *= divisor;
        } else if (n % divisor == 0) {
            n = n / divisor;
            mmc *= divisor;
        } else {
            if (divisor == 2) {
                divisor = 3;
            } else {
                divisor += 2;
            }
        }
    }

    printf("%d %d\n", m, n);

    printf("\nO MMC de %d e %d e: %d\n", m_original, n_original, mmc);
    printf("O MDC de %d e %d e: %d\n", m_original, n_original, mdc);

    return 0;
}