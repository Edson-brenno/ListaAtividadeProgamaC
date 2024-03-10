#include <stdio.h>
#include <stdlib.h>
#include "lista_exercicio.h"
#include "questoesListaDeExercicio/questao_um.h"
#include "questoesListaDeExercicio/questao_dois.h"
#include "questoesListaDeExercicio/questao_tres.h"
#include "questoesListaDeExercicio/questao_quatro.h"
#include "questoesListaDeExercicio/questao_cinco.h"


int main(){
    
    ResolucaoListaExercicio resolucaoListaExercicio = {&questao_um,&resolucao_questao_dois,&resolucao_questao_tres,
    &resolucao_questao_quatro, &resolucao_questao_cinco};

    resolucaoListaExercicio.resolucao_questao_cinco();

    return 0;
}