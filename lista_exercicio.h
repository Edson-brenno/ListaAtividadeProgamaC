#ifndef LISTA_EXERCICIO_H
#define LISTA_EXERCICIO_H

typedef struct
{
    void (*questao_um)(); // Resolução Questão um
    void (*resolucao_questao_dois)(); //Resolução questão dois
    void (*resolucao_questao_tres)(); // Resolução questão tres
    void (*resolucao_questao_quatro)(); // Resolução questao quatro
    void (*resolucao_questao_cinco)(); //Resolução questao cinco
    void (*resolucao_questao_seis)(); //Resolução questao seis
    void (*resolucao_questao_sete)(); //Resolução questao sete
} ResolucaoListaExercicio;

#endif