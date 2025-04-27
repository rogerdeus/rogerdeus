#include <stdio.h>
#include <stdlib.h>

int main(){
    float orcament, cons = 0, servico;
    float serv[50]; 
    int num_serv = 0; 
    int adi = 1; 

    
    printf("Digite um valor de orcamento igual ou maior que R$100,00: ");
    scanf("%f", &orcament);
    if (orcament < 100) {
        printf("Erro: O orcamento deve ser igual ou maior que R$100,00!\n");
        return 1;
    }

   
    while (adi) {
        printf("Digite o valor do servico %d (ou 0 para encerrar): ", num_serv + 1);
        scanf("%f", &servico);

        
        if (servico == 0) {
            adi = 0;
        } else if (servico < 0) {
            
            printf("Erro: O valor do servico nao pode ser negativo!\n");
        } else if (cons + servico <= orcament) {
           
            cons += servico;
            serv[num_serv] = servico;
            num_serv++;
            printf("Serviço adicionado. Subtotal: R$%.2f\n", cons);
            printf("Orcamento restante: R$%.2f\n", orcament - cons);
            
            if (cons == orcament) {
                printf("Orcamento totalmente consumido! .\n");
                adi = 0;
            }
        } else {
            
            printf("Erro:Nenhum outro servico pode ser adicionado.\n");
            adi = 0;
        }
    }

    
    printf("\nResumo dos servicos a serem executados:\n");
    if (num_serv == 0) {
        printf("Nenhum servico foi adicionado.\n");
    } else {
        int i = 0;
        while (i < num_serv) {
            printf("Servico %d: R$%.2f\n", i + 1, serv[i]);
            i++;
        }
    }
    printf("Total gasto: R$%.2f\n", cons);
    printf("Orcamento restante: R$%.2f\n", orcament - cons);

    return 0;
}