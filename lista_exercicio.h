#ifndef LISTA_EXERCICIO_H
#define LISTA_EXERCICIO_H

typedef struct
{
    void (*questao_um)(); // Resolução Questão um
    void (*resolucao_questao_dois)(); //Resolução questão dois
    void (*resolucao_questao_tres)();
} ResolucaoListaExercicio;

#endif