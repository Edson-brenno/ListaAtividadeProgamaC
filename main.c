#include <stdio.h>
#include <stdlib.h>
#include "lista_exercicio.h"
#include "questoesListaDeExercicio/questao_um.h"
#include "questoesListaDeExercicio/questao_dois.h"
#include "questoesListaDeExercicio/questao_tres.h"


int main(){
    
    ResolucaoListaExercicio resolucaoListaExercicio = {&questao_um,&resolucao_questao_dois,&resolucao_questao_tres};

    resolucaoListaExercicio.resolucao_questao_tres();

    return 0;
}