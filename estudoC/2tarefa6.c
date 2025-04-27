#include <stdio.h>
#include <stdlib.h>

int main(){
    int num,i,result;

    printf("coloque um numero inteiro: ");
    scanf("%d",&num);

    for(i =1; i <= 10; i++){
        result = num * i;
        
        printf("\n %d x %d = %d", i, num, result);
    }

}