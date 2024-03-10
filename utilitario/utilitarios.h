#ifndef UTILITARIOS_H
#define UTILITARIOS_H

#include <stdlib.h>

void limpar_tela(){
    #if _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}

void limpa_input_buffer(){
    
    int c;
    
    while ((c = getchar()) != '\n' && c != EOF);
}
#endif