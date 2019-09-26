#include <stdio.h>
#include <stdlib.h>



typedef struct Teste {

    int vTeste[3];
    int idade;
}teste ;


int main() {

    
    teste *v = (teste*)malloc(sizeof(teste));
    
    printf("Valor antes de alocar: %d\n", v->vTeste[0]);
    printf("Valor antes de alocar: %d\n", v->vTeste[1]);
    printf("Valor antes de alocar: %d\n", v->vTeste[2]);
    printf("Valor antes de alocar: %d\n", v->idade);
    
    if(v){
        v->vTeste[0] = 1;
        v->vTeste[1] = 2;
        v->vTeste[2] = 2;
        v->idade = 3;
    }

    printf("Valor depois de alocar: %d\n", v->vTeste[0]);
    printf("Valor depois de alocar: %d\n", v->vTeste[1]);
    printf("Valor depois de alocar: %d\n", v->vTeste[2]);
    printf("Valor depois de alocar: %d\n", v->idade);

    free(v);

    printf("Valor ao liberar: %d\n", v->vTeste[0]);
    printf("Valor ao liberar: %d\n", v->vTeste[1]);
    printf("Valor ao liberar: %d\n", v->vTeste[2]);
    printf("Valor ao liberar: %d\n", v->idade);

    return 0;
}