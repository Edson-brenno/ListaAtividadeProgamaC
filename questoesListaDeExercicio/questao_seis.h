#ifndef QUESTAO_SEIS_H
#define QUESTAO_SEIS_H

#include <stdio.h>
#include <math.h>
#include "../utilitario/utilitarios.h"

void resolucao_questao_seis(){
    
    //variaveis
    int numero;

    // enquanto o numero não for valido; While the number is not valid
    while(true){
        
        int isAValidDigit = 1; 

        printf("Digite um numero inteiro: ");

        if(scanf("%d", &numero) != 1){ // se não for um input valido; If is not a valid input
            isAValidDigit = 0;

            limpa_input_buffer(); // clear input buffer
        }

        if(isAValidDigit == 0){ // mostra mensagem error se o input não foi valido;show error if the input was not valid
            
            limpar_tela(); //limpa tela;Clear screen

            printf("Error! Nao pode ser diferente de inteiro\n"); //Mostra mensagem error; Show's error mensage

            continue; //Start over the while
        }

        break; // Stop the while
    }
    
    printf("===================================================================================\n");
    printf("O antecessor de %d e %d; O sucessor de %d e %d", numero, numero - 1, numero, numero + 1);
}
#endif