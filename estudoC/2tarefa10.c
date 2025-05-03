#include <stdio.h>


int main() {

    int n,m, MMC, MDC;
    int count = 1;

    do{
    printf("insira um numero inteiro: ");
    scanf("%d", &n);
    printf("\ninsira um segundo numero inteiro: ");
    scanf("%d", &m);
    if(n == 0 || m ==0){
        printf("\nerro\n");
    }
    }while(n <= 0 || m <= 0);
    while(count % m !=0 || count % n !=0){
        count++;
    }
    MMC = count;
    MDC = (n*m)/MMC;

    printf("\nO MMC e: %d\nO MDC e: %d", MMC,MDC);
    return 0;
}