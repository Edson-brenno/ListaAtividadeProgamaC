#ifndef QUESTAO_CINCO_H
#define QUESTAO_CINCO_H

#include <stdio.h>
#include <math.h>

void pergunta_pela_nota(char *classificacaoNota, double *variavelNota){
    
    while (true){ //Enquanto o primeiro nota não for valido; While the first number is not valid

        int isNotAValidDigit = 0; // verifica se é um nota valido;check if is a valid digit

        printf("Digite a %s nota: ", classificacaoNota);

        if(scanf("%lf", variavelNota) != 1){ // se o input não for valido; if the input is not valid
            isNotAValidDigit = 1; 
            limpa_input_buffer(); // limpa input buffer
        };
        
        if(isNotAValidDigit == 1){ // Se o nota digitado for diferente de um nota; if the typed name is different than a number
            limpar_tela(); // limpa tela; clear screen

            printf("Error! Nao pode ser diferente de numero \n"); // mostra mensagem error; Print error mensage
            continue;  //start over the while      
        }
        else if(isless(*variavelNota, 0)){
            
            limpar_tela(); // limpa tela; clear screen

            printf("Error! Nao pode ser menor que zero \n"); // mostra mensagem error; Print error mensage
            continue;  //start over the while      
        }

        break;
    }
}

void resolucao_questao_cinco(){
    
    //variaveis
    double notaUm = 0.0,notaDois = 0.0; 

    pergunta_pela_nota("primeira", &notaUm);
    pergunta_pela_nota("segunda", &notaDois);

    printf("A media do aluno foi %.2lf", (notaUm + notaDois) / 2);
}
#endif