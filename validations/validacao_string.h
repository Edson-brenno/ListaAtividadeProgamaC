/*
    Neste header contém funções que seram usadas para validação de strings
    This header contains functions that will be used to validate strings
*/
#ifndef VALIDACAO_STRING_H
#define VALIDACAO_STRING_H

#include <ctype.h>
#include <stdbool.h>
#include <string.h>
#include <stdio.h>

bool existe_digito(char *texto){ //Verifica se contém números na string; Check if exists numbers at the text

    for (int c = 0; c < strlen(texto); c++){
        if (isdigit(texto[c])){
            return true;
        }
    }

    return false;

}

bool existe_character_especial(char *texto){ // Verifica se contém caracteres especiais na string; Check if exists special characteres

    for (int c = 0; c < strlen(texto); c++){
        if (isalpha(texto[c]) == 0){
            
            return true;
        }
    }

    return false;
}
#endif