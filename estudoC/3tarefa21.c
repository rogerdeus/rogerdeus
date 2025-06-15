#include<stdio.h>
#include<stdlib.h>
#define MAX 30

void mostra_array(float a1[MAX], int i, int t){

    printf("\nArray:(%.1f", a1[0]);
    for(i = 1; i < t; i++){
        printf(", %.1f", a1[i]);
    }

}
int main(){
    float a1[MAX];
    int i;
    int t;

    printf("coloque a quantidade de termos do array: ");
    scanf("%d", &t);

    printf("coloque os %d termos do array: ", t);
    for(i = 0; i < t; i++){
        scanf("%f", &a1[i]);
    }

    mostra_array(a1, i, t);

    return 0;
}
