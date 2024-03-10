#ifndef QUESTAO_SETE_H
#define QUESTAO_SETE_H

#include <stdio.h>
#include "../utilitario/utilitarios.h"

void pergunta_coeficiente_da_equacao(char *coeficiente, double *variavelCoeficiente){
    
    while(true){

        int isAValidDigit = 1;

        printf("Digite o coeficiente %s da equacao: ", coeficiente);

        if(scanf("%lf", variavelCoeficiente) != 1){
            isAValidDigit = 0;
            limpa_input_buffer();
        }

        if(isAValidDigit == 0){
            limpar_tela(); //limpa tela;Clear screen

            printf("Error! Nao pode ser diferente de um numero\n"); //Mostra mensagem error; Show's error mensage

            continue; //Start over the while
        }

        free(coeficiente);
        free(variavelCoeficiente);
        break;
    }
    
}

void resolucao_questao_sete(){
    
    double a,b,c,delta;

    pergunta_coeficiente_da_equacao("a", &a);
    pergunta_coeficiente_da_equacao("b", &b);
    pergunta_coeficiente_da_equacao("c", &c);

    //delta = b ^ 2;

}
#endif