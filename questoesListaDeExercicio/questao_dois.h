#ifndef QUESTAO_DOIS_H
#define QUESTAO_DOIS_H

#include <stdio.h>
#include <errno.h>
#include <stdio.h>
#include <unistd.h>
#include "../validations/validacao_string.h"
#include "../utilitario/utilitarios.h"



void questao_dois(){
    char nomeUsuario[254];

    while(true){
        printf("Digite o seu nome: ");
        scanf("%254s", nomeUsuario);

        if (existe_digito(nomeUsuario)){

            limpar_tela();

            printf("Error! O nome nao pode conter numeros!");

            sleep(2);

            limpar_tela();

        }
        else if(existe_character_especial(nomeUsuario)){
            
            limpar_tela();

            printf("Error! O nome nao pode conter caracteres especiais!");

            sleep(2);

            limpar_tela();

        }
        else{
            break;
        }
    }

    printf("Ola %s, e um prazer lhe conhecer", nomeUsuario);

}

#endif