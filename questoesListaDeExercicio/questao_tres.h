#ifndef QUESTAO_TRES_H
#define QUESTAO_TRES_H

#include <stdio.h>
#include <math.h>
#include "../validations/validacao_string.h"
#include "../utilitario/utilitarios.h"

void pergunta_nome_funcionario(char *variavelNomeFuncionario){
    while(true){ // enquanto nome e salario não forem válidos; while name and salary is not valid
        printf("Digite o nome no funcionario: ");
        scanf("%254s", variavelNomeFuncionario);

        // analisa se no nome do funcionario tem numeros ou carateres especiais
        // chack if at emplooyee name has numbers ou special characters
        if(existe_digito(variavelNomeFuncionario) || existe_character_especial(variavelNomeFuncionario)){ 
            
            limpar_tela(); // limpa tela; clear the screen

            printf("Error! O nome do funcionario nao pode ter digitos ou carateres especiais!\n"); // Mostra error; Shows the error

            continue; // reinicia o while para saber o nome do funcionario;start over the while for emplooye's name
        }

        break;
    }
}

void pergunta_salario_funcionario(double *variavelSalarioFuncionario){
    while(true){// while para perguntar o salario do funcinario; while to ask the emplooye salary
        
        int isNotAValidINput = 0;

        printf("Digite o salario do funcionario: ");

        if(scanf("%lf", variavelSalarioFuncionario) != 1){ // verifica se a resposta não é double; check if the answer is not double
            
            isNotAValidINput = 1;

            limpa_input_buffer(); //Limpa o input buffer; Clear the input buffer

        }

        if(isNotAValidINput == 1){
            limpar_tela(); // limpa tela; clear the screen

            printf("Error! O salario do funcionario tem ser um numero!\n");// Mostra error; Shows the error

            continue; // reinicia o while para saber o salario do funcionario;start over the while for emplooye's salary
        }

        // analisa se o salario do funcionario foi como double ou se é maior que zero
        // check if emplooye salary was typed or if is higher than zero
        if (islessequal(*variavelSalarioFuncionario,0.000000)){
            limpar_tela(); // limpa tela; clear the screen

            printf("Error! O salario do funcionario tem que ser maior zero!\n");// Mostra error; Shows the error

            continue; // reinicia o while para saber o salario do funcionario;start over the while for emplooye's salary
        }
        break; // finaliza o while principal; Finish the main while
    }
}
void resolucao_questao_tres(){
    
    //variaveis
    char nomeFuncionario[254];
    double salarioFuncionario;

    pergunta_nome_funcionario(nomeFuncionario);
        
    pergunta_salario_funcionario(&salarioFuncionario);
    
    printf("O funcionario %s, vai receber %.2lf no mes de abril\n", nomeFuncionario, salarioFuncionario);  

}
#endif