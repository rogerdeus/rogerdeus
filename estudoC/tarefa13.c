#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
   
   float peso, socrates,atenas; 
   int altura, idade;
   char sex[10];

   printf("informe se voce e homem ou mulher: ");
   scanf("%s", sex);

   printf(" digite sua idade: ");
   scanf("%d", &idade);

   printf("digite sua altura: ");
   scanf("%d",&altura);

   printf("digite seu peso: ");
   scanf("%f", &peso);

   socrates = 66.5 + (13.75 * peso) + (5.003 * altura) - (6.775 * idade);
   atenas = 655.1 + (9.563 * peso) + (1.850 * altura) - (4.676 * idade);

   if(strcmp(sex, "homem")== 0){
    printf("\nseu peso e:%.2f \nsua altura e:%.2d \nsua idade e:%.2d \nseu TBM: %.2f", peso, altura, idade,socrates);
   }else if(strcmp(sex, "mulher")== 0){
    printf("\nseu peso e:%.2f \nsua altura e:%.2d \nsua idade e:%.2d \nseu TBM: %.2f", peso, altura, idade,atenas );
   }






    return 0;

}