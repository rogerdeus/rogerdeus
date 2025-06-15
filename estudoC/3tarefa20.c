#include<stdio.h>
#include<math.h>

int tri(float hi, float cateto1, float cateto2){
    float conta;
    conta = sqrt(pow(cateto1, 2)+ pow(cateto2, 2));
    if(conta == hi){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    float hi = 5;
    float cateto1 = 4;
    float cateto2 = 3;
    
    if(tri(hi, cateto1, cateto2) == 1){
        printf("temos um triagulo retangulo");
    }
 return 0;
}
