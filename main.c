#include <stdio.h>
#include <stdlib.h>
#include "lista_exercicio.h"
#include "questoesListaDeExercicio/questao_um.h"
#include "questoesListaDeExercicio/questao_dois.h"


int main(){
    
    ResolucaoListaExercicio resolucaoListaExercicio = {&questao_um,&resolucao_questao_dois};

    resolucaoListaExercicio.resolucao_questao_dois();

    return 0;
}