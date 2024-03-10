#ifndef QUESTAO_SETE_H
#define QUESTAO_SETE_H

#include <stdio.h>
#include <math.h>
#include "../utilitario/utilitarios.h"

// Pergunta o coeficiente ao usuario;Ask's the user for the equation
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

        break;
    }
    
}

void resolucao_questao_sete(){
    
    //Variaveis
    double a,b,c,delta;

    // Pergunta o usuario;Ask's the user
    pergunta_coeficiente_da_equacao("a", &a);
    pergunta_coeficiente_da_equacao("b", &b);
    pergunta_coeficiente_da_equacao("c", &c);

    //Calcula delta; Calc delta
    delta = pow(b,2) - 4 * (a * c);

    if(delta > 0){
        double x1 = ((-b + sqrt(delta)) / (2 * a));
        double x2 = ((-b - sqrt(delta)) / (2 * a));

        printf("======================================================\n");
        printf("Duas solucoes reais: x1 = %.2lf e x2 = %.2lf \n", x1,x2);
    }
    else if(delta == 0){
        double x = -b / (2 * a);

        printf("======================================================\n");
        printf("uma solução real: x = %.2lf \n", x);
    }
    else{
        printf("Não possui solução real");
    }
}
#endif