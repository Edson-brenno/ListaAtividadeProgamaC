#ifndef QUESTAO_DOIS_H
#define QUESTAO_DOIS_H

#include <stdio.h>
#include <errno.h>
#include <stdio.h>
#include <unistd.h>
#include "../validations/validacao_string.h"
#include "../utilitario/utilitarios.h"



void resolucao_questao_dois(){
    char nomeUsuario[254];

    while(true){
        // Perguntar usuário pelo nome; asks the user for his name
        printf("Digite o seu nome: ");
        scanf("%254s", nomeUsuario);

        if (existe_digito(nomeUsuario)){ // verifica se o nome tem numero; check if the user name has number

            limpar_tela(); //Limpa tela; Clear the screen

            printf("Error! O nome nao pode conter numeros!\n"); // Mostra o error; print the error

        }
        else if(existe_character_especial(nomeUsuario)){ // vefirica se existe algum caracter especial; check if exist any special character
            
            limpar_tela(); // Limpar tela; Clear the screen

            printf("Error! O nome nao pode conter caracteres especiais! \n"); // Motra o error; Print the error

        }
        else{
            break;
        }
    }

    printf("=============================================\n");
    printf("Ola %s, prazer em lhe conhecer", nomeUsuario);


}

#endif