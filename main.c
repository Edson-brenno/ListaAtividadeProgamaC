#include <stdio.h>
#include <stdlib.h>
#include "lista_exercicio.h"
#include "questoesListaDeExercicio/questao_um.h"
#include "questoesListaDeExercicio/questao_dois.h"
#include "questoesListaDeExercicio/questao_tres.h"
#include "questoesListaDeExercicio/questao_quatro.h"
#include "questoesListaDeExercicio/questao_cinco.h"
#include "questoesListaDeExercicio/questao_seis.h"


int main(){
    
    ResolucaoListaExercicio resolucaoListaExercicio = {&questao_um,&resolucao_questao_dois,&resolucao_questao_tres,
    &resolucao_questao_quatro, &resolucao_questao_cinco, &resolucao_questao_seis};

    resolucaoListaExercicio.resolucao_questao_seis();

    return 0;
}