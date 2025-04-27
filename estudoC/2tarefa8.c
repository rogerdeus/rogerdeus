#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int num,i,result = 1;
    printf("insira um numero inteiro: ");
    scanf("%d",&num);

    
    if(num <= 0){
        printf("erro");
        return 1;
    }else{
        if(num == 0){
            printf("0! = 1\n");
        } else{
            for(i =1; i<= num; i++){
                result = result * i;

            }
            printf("\n%d! = %d", num, result);
        }
    }



}