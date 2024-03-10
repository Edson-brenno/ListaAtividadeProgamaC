#ifndef QUESTAO_QUATRO_H
#define QUESTAO_QUATRO_H

#include <stdio.h>
#include <math.h>
#include "../utilitario/utilitarios.h"

void resolucao_questao_quatro(){
    
    //variaveis
    int numeroUm = 0,numeroDois = 0; 

    while (true){ //Enquanto o primeiro numero não for valido; While the first number is not valid

        int isNotADigit = 0; // verifica se é um numero valido;check if is a valid digit

        printf("Digite o primeiro numero: ");
        if(scanf("%d", &numeroUm) != 1){ // se o input não for valido; if the input is not valid
            isNotADigit = 1; 
            limpa_input_buffer(); // limpa input buffer
        };
        
        if(isNotADigit == 1){ // Se o numero digitado for diferente de um numero; if the typed name is different than a number
            limpar_tela(); // limpa tela; clear screen

            printf("Error! Nao pode ser diferente de numero \n"); // mostra mensagem error; Print error mensage
            continue;  //start over the while      
        }

        break;
    }
    
    while(true){ //Enquanto o segundo numero não for valido; While the second number is not valid

        int isNotADigit = 0;

        printf("Digite o segundo numero: ");
        
         if(scanf("%d", &numeroDois) != 1){ // se o input não for valido; if the input is not valid
            isNotADigit = 1; 
            limpa_input_buffer(); // limpa input buffer
        };
        
        if(isNotADigit == 1){ // Se o numero digitado for diferente de um numero; if the typed name is different than a number
            
            limpar_tela(); // limpa tela; clear screen

            printf("Error! Nao pode ser diferente de numero \n"); // mostra mensagem error; Print error mensage
            
            continue;  //start over the while     
        }

        break;
    }

    printf("%d + %d = %d\n", numeroUm, numeroDois,numeroUm + numeroDois );
}
#endif