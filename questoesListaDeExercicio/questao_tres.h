#ifndef QUESTAO_TRES_H
#define QUESTAO_TRES_H

#include <stdio.h>
#include <math.h>
#include "../validations/validacao_string.h"
#include "../utilitario/utilitarios.h"

void resolucao_questao_tres(){
    
    //variaveis
    char nomeFuncionario[254];
    double salarioFuncionario;
    double *ponteiroSalarioFuncionario = &salarioFuncionario;

    while(true){ // enquanto nome e salario não forem válidos; while name and salary is not valid
        printf("Digite o nome no funcionario: ");
        scanf("%254s", nomeFuncionario);

        // analisa se no nome do funcionario tem numeros ou carateres especiais
        // chack if at emplooyee name has numbers ou special characters
        if(existe_digito(nomeFuncionario) || existe_character_especial(nomeFuncionario)){ 
            
            limpar_tela(); // limpa tela; clear the screen

            printf("Error! O nome do funcionario nao pode ter digitos ou carateres especiais!\n"); // Mostra error; Shows the error

            continue; // reinicia o while para saber o nome do funcionario;start over the while for emplooye's name
        }

        break;
    }
        
    while(true){// while para perguntar o salario do funcinario; while to ask the emplooye salary
        
        printf("Digite o seu salário do funcionario: ");

        if(scanf("%lf", ponteiroSalarioFuncionario) != 1){ // verifica se a resposta não é double; check if the answer is not double
            
            limpa_input_buffer(); //Limpa o input buffer; Clear the input buffer

            limpar_tela(); // limpa tela; clear the screen

            printf("Error! O salario do funcionario tem que um numero!\n");// Mostra error; Shows the error

            continue; // reinicia o while para saber o salario do funcionario;start over the while for emplooye's salary
        }

        // analisa se o salario do funcionario foi como double ou se é maior que zero
        // check if emplooye salary was typed or if is higher than zero
        if (islessequal(*ponteiroSalarioFuncionario,0.000000)){
            limpar_tela(); // limpa tela; clear the screen

            printf("Error! O salario do funcionario tem que ser maior zero!\n");// Mostra error; Shows the error

            continue; // reinicia o while para saber o salario do funcionario;start over the while for emplooye's salary
        }
        break; // finaliza o while principal; Finish the main while
    }
    
    printf("O funcionario %s, vai receber %.2lf no mes de abril\n", nomeFuncionario, *ponteiroSalarioFuncionario);  
}
#endif