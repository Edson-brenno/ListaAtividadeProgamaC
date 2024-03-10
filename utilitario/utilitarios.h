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
#endif