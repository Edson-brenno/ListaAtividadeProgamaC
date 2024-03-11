#ifndef MENU_H
#define MENU_H

#include <stdio.h>
#include "utilitario/utilitarios.h"

void mostra_nome_menu(){
    printf("===================================================\n");
    printf("Resolucao Lista de Exercicio \n");
    printf("====================================================\n");
}

void mostra_opcoes_menu(){
    printf("[1] Resolucao Questao Um \n");
    printf("[2] Resolucao Questao dois \n");
    printf("[3] Resolucao Questao tres \n");
    printf("[4] Resolucao Questao quatro \n");
    printf("[5] Resolucao Questao cinco \n");
    printf("[6] Resolucao Questao seis \n");
    printf("[7] Resolucao Questao sete \n");
    printf("[8] Sair \n");
}

void roda_menu(){
    mostra_nome_menu();

    mostra_opcoes_menu();
}
#endif