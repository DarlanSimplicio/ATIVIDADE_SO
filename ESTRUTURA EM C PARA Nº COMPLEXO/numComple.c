#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "estrutura.h"

int main() {

    Complexo c1 = {4, 5}, c2 = {6, 3};

    Complexo retorno;
    Complexo vetComplex[100];
    float norma, escalar = 12 ;
    double angle;

    retorno = somaComplexo(c1, c2);
    printf("\n+ SOMA COMPLEXOS +\n");
    printf("C1 real = %0.2f \nC2 real = %0.2f \n", c1.real, c2.real) ;
    printf("C1 imag = %0.2f \nC2 imag = %0.2f \n", c1.imag, c2.imag) ;
    printf("Soma Real = %0.2f \nSoma Imag = %0.2f \n\n", retorno.real, retorno.imag);

    retorno = subtComplexo(c1, c2);
    printf("- SUB COMPLEXOS -\n");
    printf("C1 real = %0.2f \nC2 real = %0.2f \n", c1.real, c2.real) ;
    printf("C1 imag = %0.2f \nC2 imag = %0.2f \n", c1.imag, c2.imag) ;
    printf("Subt Real = %0.2f \nSubt Imag = %0.2f \n\n", retorno.real, retorno.imag);

    retorno = multCompEscalar(c1, escalar);
    printf("* MULT COMPLEXOS *\n");
    printf("C1 real = %0.2f \nC2 real = %0.2f \n", c1.real, c2.real) ;
    printf("C1 imag = %0.2f \nC2 imag = %0.2f \n", c1.imag, c2.imag) ;
    printf("CompEscalar Real = %0.2f \nCompEscalar Imag = %0.2f \n\n", retorno.real, retorno.imag);

    retorno = multComplexo(c1, c2);
    printf("* MULT COMPLEXOS *\n");
    printf("C1 real = %0.2f \nC2 real = %0.2f \n", c1.real, c2.real) ;
    printf("C1 imag = %0.2f \nC2 imag = %0.2f \n", c1.imag, c2.imag) ;
    printf("Mult Real = %0.2f \nMult Imag = %0.2f \n\n", retorno.real, retorno.imag);

    norma = normaComplexo(c1);
    printf("- NORMA COMPLEXO -\n");
    printf("C1 real = %0.2f \nC1 imag = %0.2f \n", c1.real, c1.imag) ;
    printf("Norma Numero Complexo = %0.2f \n\n", norma);

    retorno = ConjugComplexo(c1);
    printf("* CONJUG COMPLEXO *\n");
    printf("C1 real = %0.2f \nC1 imag = %0.2f \n", c1.real, c1.imag) ;
    printf("Conjugado Real = %0.2f \nConjugado Imag = %0.2f \n\n", retorno.real, retorno.imag);

    retorno = divComplexo(c1, c2);
    printf("/ DIV COMPLEXOS /\n");
    printf("C1 real = %0.2f \nC2 real = %0.2f \n", c1.real, c2.real) ;
    printf("C1 imag = %0.2f \nC2 imag = %0.2f \n", c1.imag, c2.imag) ;
    printf("Div Real = %0.2f \nDiv Imag = %0.2f \n\n", retorno.real, retorno.imag);

    angle = anguloComplexo(c1);
    printf("- ANGULO COMPLEXO -\n");
    printf("C1 real = %0.2f \nC1 imag = %0.2f \n", c1.real, c1.imag) ;
    printf("Angulo Numero Complexo = %0.2f \n\n", angle);

    // FOR PARA INICIALIZAR VETOR DE 100 POSIÇÕES PARA NÚMERO COMPLEXO
    for(int i = 0; i < 100 ; i++) {

        vetComplex[i].real = rand() % 1000 ;
        vetComplex[i].imag = rand() % 1000 ;
    }
    

    return 0;
}