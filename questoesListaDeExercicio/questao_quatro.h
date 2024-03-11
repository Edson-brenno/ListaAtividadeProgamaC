#ifndef QUESTAO_QUATRO_H
#define QUESTAO_QUATRO_H

#include <stdio.h>
#include <math.h>
#include "../utilitario/utilitarios.h"

void pergunta_pelo_numero(char *qualificacaoNumero, int *variavelNumero){

    while(true){
        int isNotADigit = 0; // verifica se é um numero valido;check if is a valid digit

        printf("Digite o %s numero: ", qualificacaoNumero);
        if(scanf("%d", variavelNumero) != 1){
            isNotADigit = 1;

            limpa_input_buffer(); // limpa input buffer
        }

        if(isNotADigit == 1){ // Se o numero digitado for diferente de um numero; if the typed name is different than a number
            limpar_tela(); // limpa tela; clear screen

            printf("Error! Nao pode ser diferente de numero \n"); // mostra mensagem error; Print error mensage
            continue;  //start over the while      
        }

        break;
    }
}
void resolucao_questao_quatro(){
    
    //variaveis
    int numeroUm = 0,numeroDois = 0; 

    pergunta_pelo_numero("primeiro", &numeroUm);
    pergunta_pelo_numero("segundo", &numeroDois);
    
    printf("%d + %d = %d\n", numeroUm, numeroDois,numeroUm + numeroDois );
}
#endif