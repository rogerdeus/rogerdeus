#include <stdio.h>

int main(){
    int num,i;
    int primo;

    printf("insira um numero: ");
    scanf("%d",&num);

    if(num <= 1){
        primo = 0;
    } else{
        i = 2;

        while(i * i <= num && primo){
            if(num % i == 0){
                primo = 0;
            }
            i++;
        }
    }
    if(primo){
        printf("\n %d e primo", num);
    }else{
        printf("\n %d nao e primo",num);
    }

    return 0;
}