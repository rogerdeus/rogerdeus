#include <stdio.h>
#include <stdlib.h>

int main() {
    float orcament, cons = 0, servico;
    float servicos[50];  
    int num_servicos = 0; 

    
    printf("Digite um valor de orçamento igual ou maior que R$100,00: ");
    scanf("%f", &orcament);
    if (orcament < 100) {
        printf("Erro: O orçamento deve ser igual ou maior que R$100,00!\n");
        return 1;
    }

    
    while (1) {
        printf("Digite o valor do serviço %d (ou 0 para encerrar): ", num_servicos + 1);
        scanf("%f", &servico);

        
        if (servico == 0) {
            printf("Encerrando a adição de serviços.\n");
            return 0;
        }

    
        if (servico < 0) {
            printf("Erro: O valor do serviço não pode ser negativo!\n");
            continue;
        }

    
        if (cons + servico <= orcament) {
            cons += servico;
            servicos[num_servicos] = servico; 
            num_servicos++;
            printf("Serviço adicionado. Subtotal: R$%.2f\n", cons);
            printf("Orçamento restante: R$%.2f\n", orcament - cons);
            
            if (cons == orcament) {
                printf("Orçamento totalmente consumido! Nenhum outro serviço pode ser adicionado.\n");
                break;
            }
        } else {
            printf("Erro: Este serviço estoura o orçamento! Nenhum outro serviço pode ser adicionado.\n");
            break;
        }
    }

    
    printf("\nResumo dos serviços a serem executados:\n");
    if (num_servicos == 0) {
        printf("Nenhum serviço foi adicionado.\n");
    } else {
        for (int i = 0; i < num_servicos; i++) {
            printf("Serviço %d: R$%.2f\n", i + 1, servicos[i]);
        }
    }
    printf("Total gasto: R$%.2f\n", cons);
    printf("Orçamento restante: R$%.2f\n", orcament - cons);

    return 0;
}