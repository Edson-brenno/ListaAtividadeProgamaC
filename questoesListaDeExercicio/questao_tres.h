#ifndef QUESTAO_TRES_H
#define QUESTAO_TRES_H

#include <stdio.h>
#include <math.h>

void resolucao_questao_tres(){
    
    //variaveis
    char nomeFuncionario[254];
    double salarioFuncionario = 0.0;
    double *ponteiroSalarioFuncionario = &salarioFuncionario;

    printf("Digite o seu nome: ");
    scanf("%254s", nomeFuncionario);

    printf("Digite o seu salário: ");
    scanf("%lf", ponteiroSalarioFuncionario);
    
    printf("funcionario %s ", nomeFuncionario);
    printf("Com salario %.lf", *ponteiroSalarioFuncionario);    
}
#endif