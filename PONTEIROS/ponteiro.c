#include <stdio.h>
#include <stdlib.h>
#include "funcoes.h"

#define NULL 0;

int main()
{

    float vet[10] = {1.1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.8, 1.9, 2};
    int vett[10] = {2, 6, 10, 14, 4, 22, 26, 2, 24, 2};
    int selecao = 0, escolha = 0;

    printf("----- ESCOLHA UMA ATIVIDADE -----\n");
    printf("1 - IMPRIMIR VETOR DE FLOAT\n");
    printf("2 - PESQUISAR EM VETOR DE INTEIROS\n");
    printf("-- PRESSIONE QUALQUER OUTRA TECLA PARA SAIR: ");

    scanf("%d", &escolha);

    switch (escolha)
    {
    case 1:

        impPoint(&vet[0], &vet[9]);
        break;

    case 2:

        printf("Qual o valor de pesquisa: ");
        scanf("%d", &selecao);
        pesqPoint(&vett[0], &vett[9], selecao);
        break;

    default:
        printf("Ate mais.. :)\n");
        break;
    }

    system("pause");
    return 0;
}