#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <stdlib.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int dia, mes, niv, dif;

    
    printf("Informe sua data de nascimento (dia e mês): ");
    scanf("%d %d", &dia, &mes);
    printf("\nSua data de nascimento é: %d/%d\n", dia, mes);

    
    if (mes == 1) {
        niv = dia + 0;
    } else {
        if (mes == 2) {
            niv = dia + 31;
        } else {
            if (mes == 3) {
                niv = dia + 59;
            } else {
                if (mes == 4) {
                    niv = dia + 90;
                } else {
                    if (mes == 5) {
                        niv = dia + 120;
                    } else {
                        if (mes == 6) {
                            niv = dia + 151;
                        } else {
                            if (mes == 7) {
                                niv = dia + 181;
                            } else {
                                if (mes == 8) {
                                    niv = dia + 212;
                                } else {
                                    if (mes == 9) {
                                        niv = dia + 243;
                                    } else {
                                        if (mes == 10) {
                                            niv = dia + 273;
                                        } else {
                                            if (mes == 11) {
                                                niv = dia + 304;
                                            } else {
                                                if (mes == 12) {
                                                   niv = dia + 334;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    
    printf("\nO seu aniversário é o %dº dia do ano\n", niv);

    
    dif = niv - 94;

    
    if (dif > 0) {
        printf("\nFaltam %d dias para o seu aniversário\n", dif);
    } else {
        if (dif < 0) {
            printf("\nSeu aniversário foi há %d dias\n", -1 * dif);
        } else {
            if (dif == 0) {
                printf("\nParabéns! Hoje é o seu aniversário!\n");
            } else {
                printf("\nErro ao processar a data informada.\n");
            }
        }
    }

    return 0;
}