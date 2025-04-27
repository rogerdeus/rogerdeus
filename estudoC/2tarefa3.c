#include <stdio.h>


int main(){
	int num;
    

    

    while(1){
        printf("\ndigite uma nota entre 1 e 10: ");
        scanf("%d", &num);
        if(num >=1 && num <=10){
            printf("\n a nota e: %d", num);
            break;
        } else{
            printf("\nnumero invalido tente novamente: ");
        }

    }
	return 0;
}