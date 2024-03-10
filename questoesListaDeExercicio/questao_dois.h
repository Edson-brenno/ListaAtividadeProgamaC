#ifndef QUESTAO_DOIS_H
#define QUESTAO_DOIS_H

#include <stdio.h>
#include "../validations/validacao_string.h"



void questao_dois(){
    char nomeUsuario[254];

    printf("Digite o seu nome: ");
    scanf("%254s", nomeUsuario);

    printf("Seu nome e %s \n", nomeUsuario);
    printf("O tamanho e %d \n",strlen(nomeUsuario));
    if (existe_digito(nomeUsuario)){
        printf("O seu nome nao pode conter numeros");
    }
    else if(existe_character_especial(nomeUsuario)){
        printf("Digite o seu sem caracteres especiais");
    }
    else{
        printf("Tudo ok");
    }
}

#endif