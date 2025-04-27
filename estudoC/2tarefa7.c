#include <stdio.h>

int main(){
    int num;
    int pri = 0, seg = 1, prox;

    printf("insira um numero inteiro: ");
    scanf("%d", &num);

    if(num <= 0){
        printf("erro");
    }

    if(num == 1){
        printf("\n%d", pri);
    }
    else{
        printf("\n%d %d", pri, seg); 
        for(int i = 3; i <= num; i++){
            prox = pri + seg;
            printf(" %d", prox);
            pri = seg;
            seg = prox;
        }
        printf("\n");
    }

    return 0;
}