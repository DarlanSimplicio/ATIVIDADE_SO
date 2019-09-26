#include <stdio.h>
#include <stdlib.h>
#include "estrutura.h"

int main() {

    Funcionario dados[5];
    float total = 0 ;
    char cargo[30];

 /*   printf("Digite: ");
    scanf("%s %s", &cargo, &carg);

        if(cargo[1] == carg[1]){
            printf("OK\n");
        }
*/
    for(int i = 0 ; i < 5 ; i++) {

        printf("Digite o nome do %d%c Funcionario: ", i+1, 167);
        scanf("%s", &dados[i].nome);
        fflush(stdin);
        printf("Digite o Cargo do %d%c Funcionario: ", i+1, 167);
        scanf("%s", &dados[i].cargo);
        fflush(stdin);
        printf("Digite o Endereco do %d%c Funcionario: ", i+1, 167);
        scanf("%s", dados[i].ender);
        fflush(stdin);
        printf("Digite CPF do %d%c Funcionario: ", i+1, 167);
        scanf("%s", dados[i].cpf);
        fflush(stdin);
        printf("Digite a Idade do %d%c Funcionario: ", i+1, 167);
        scanf("%d", &dados[i].idade);
        printf("Digite o Salario do %d%c Funcionario: ", i+1, 167);
        scanf("%f", &dados[i].salario);
    }

    for(int i = 0 ; i < 5 ; i++) {
        printf("%d%c Funcionario: %s, seu Salario: %0.2f\n", i+1, 167, dados[i].nome, dados[i].salario);
        total += dados[i].salario;
    }

    printf("Total de Salario: R%c %0.2f\n", 36, total);

    printf("Digite o cargo: ");
    scanf("%s", &cargo);
    printf("Total do salario para o cargo escolhido: %0.2f\n", totalPago(dados, cargo));

    return 0;
}