#ifndef MENU_H
#define MENU_H

#include <stdio.h>
#include <Windows.h>
#include <unistd.h>
#include <stdbool.h>

#include "lista_exercicio.h"
#include "questoesListaDeExercicio/questao_um.h"
#include "questoesListaDeExercicio/questao_dois.h"
#include "questoesListaDeExercicio/questao_tres.h"
#include "questoesListaDeExercicio/questao_quatro.h"
#include "questoesListaDeExercicio/questao_cinco.h"
#include "questoesListaDeExercicio/questao_seis.h"
#include "questoesListaDeExercicio/questao_sete.h"

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
    printf("====================================================\n");
}

bool pergunta_e_valida_opcao_menu_escolhida(int *variavelOpcaoMenu){
    
    int isNotAValidOption = 0;

    printf("Digite a opcao escolhida: ");
    if(scanf("%d", variavelOpcaoMenu) != 1){
        isNotAValidOption = 1;

        limpa_input_buffer();
    }

    if(isNotAValidOption == 1){
        return false;
    }
    else if (*variavelOpcaoMenu <= 0 || *variavelOpcaoMenu > 8){
        return false;
    }
    else{
        return true;
    }
}

void mostra_mensagem_error_menu(){
    limpar_tela();

    printf("====================================================\n");
    printf("ERROR! OPCAO MENU INVALIDA \n");
    printf("====================================================\n");

    Sleep(1000);

    limpar_tela();
}

void mostra_opcao_selecionada(int *opcaoMenuSelecionada){

    ResolucaoListaExercicio listaExercicio = {questao_um, resolucao_questao_dois, resolucao_questao_tres, 
    resolucao_questao_quatro, resolucao_questao_cinco, resolucao_questao_seis, resolucao_questao_sete };

    switch (*opcaoMenuSelecionada)
    {
    case 1:
        
        listaExercicio.questao_um();

        break;
    
    case 2:

        listaExercicio.resolucao_questao_dois();

        break;

    case 3:

        listaExercicio.resolucao_questao_tres();

        break;
    
    case 4:

        listaExercicio.resolucao_questao_quatro();

        break;
    
    case 5:

        listaExercicio.resolucao_questao_cinco();

        break;

    case 6:

        listaExercicio.resolucao_questao_seis();

        break;

    case 7:

        listaExercicio.resolucao_questao_sete();

        break;

    default:

        printf("Tchau :)");

        break;
    }
}

void roda_menu(){

    int opcaoMenu;

    

    while(true){

        mostra_nome_menu();

        mostra_opcoes_menu();

        if(!pergunta_e_valida_opcao_menu_escolhida(&opcaoMenu)){
            mostra_mensagem_error_menu();
            continue;
        }
        else{
            break;
        }
    }

    printf("====================================================\n");
    
    mostra_opcao_selecionada(&opcaoMenu);
}
#endif