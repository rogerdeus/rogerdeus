#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    double arr[10] = {2, 3, 5, 10, 6, 4, 7, 8, 9, 1};
    double dobr;
    int i,j = 10;

    for(i = 0; i < j; i++){
        printf(" %.0f",arr[i]);
    }
   
    printf("\nos valores dobrados:\n");
    for(i = 0; i < j; i++){
        dobr = pow(arr[i], 2);

        printf(" %.0f",dobr);
    }





}