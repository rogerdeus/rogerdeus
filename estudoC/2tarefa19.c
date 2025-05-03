#include <stdio.h>

int main(){
    int num;
    int bi = 0, resto;
    int n = 1;

    printf("insira um numero decimal: ");
    scanf("%d",&num);


    while(num > 0){
        resto = num % 2;
        bi = bi + resto * n;
        n = n * 10;
        num = num / 2;
    
    }
    printf("%d", bi);
   
    return 0;

}