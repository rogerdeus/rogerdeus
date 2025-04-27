#include <stdio.h>
#include <stdlib.h>

int main(){

int A, B, C, D, dx;

printf("digite os valores inteiros de A B C D: ");
scanf("%d %d %d %d", &A, &B, &C, &D );

if(A < 0|| B <0|| C <0|| D <0){
    printf("\nencerrar programa");
    return 0;
}

dx = (A + B + C + D)/4;
printf("a media dos valores\n%d", dx);
	
}