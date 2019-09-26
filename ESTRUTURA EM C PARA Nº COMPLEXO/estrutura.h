typedef struct 
{
    float real;
    float imag;
    float z ;
    float theta;

} Complexo ;

// FUNÇÃO PARA SOMA ENTRE DOIS NÚMEROS COMPLEXOS
Complexo somaComplexo(Complexo n1, Complexo n2) {

    Complexo soma; 
    soma.real = n1.real + n2.real ;
    soma.imag = n1.imag + n2.imag ;
    
    return soma; 
}

// FUNÇÃO PARA SUBTRAÇÃO ENTRE DOIS NÚMEROS COMPLEXOS
Complexo subtComplexo(Complexo n1, Complexo n2) {

    Complexo subt ;

    subt.real = n1.real - n2.real ;
    subt.imag = n1.imag - n2.imag ;

    return subt;
}

// FUNÇÃO PARA MULTIPLICAÇÃO NÚMERO COMPLEXO POR ESCALAR
Complexo multCompEscalar(Complexo n1, float escalar) {

    Complexo compEsc ;
    
    compEsc.real = n1.real * escalar  ;
    compEsc.imag = n1.imag * escalar  ;

    return compEsc;
}

// FUNÇÃO PARA MULTIPLICAÇÃO ENTRE DOIS NÚMEROS COMPLEXOS
Complexo multComplexo(Complexo n1, Complexo n2) {

    Complexo mult ;
    float teste;
    //mult.real = ((n1.real*n2.real)+(n1.real*n2.imag))*(-1) ;
    //mult.imag = ((n1.imag*n2.real)+(n1.imag*n2.imag))*(-1) ;

    mult.real = ((n1.real*n2.real) - (n1.imag*n2.imag)) ;
    mult.imag = ((n1.real*n2.imag) + (n1.imag*n2.real)) ;

    return mult;
}

// FUNÇÃO PARA RETORNO DA NORMA DE NÚMERO COMPLEXO
float normaComplexo(Complexo n1) {

    float norma ;

    norma = sqrt((n1.real*n1.real) + (n1.imag*n1.imag));
    n1.z = norma;

    return norma;
}

// FUNÇÃO PARA CONJUGADO DE NÚMERO COMPLEXO
Complexo ConjugComplexo(Complexo n1) {

    Complexo conjugado;

    conjugado.real = -n1.real;
    conjugado.real = -n1.imag;

    return conjugado;
}

// FUNÇÃO PARA RETORNO DA DIVISÃO DE NÚMEROS COMPLEXOS
Complexo divComplexo(Complexo n1, Complexo n2) {

    Complexo divisao;
    
    float denom = normaComplexo(n2)*normaComplexo(n2);

    divisao.real = (n1.real*n2.real+n1.imag*n2.imag) / denom;
    divisao.imag = (n2.real*n1.imag+n1.real*n2.imag) / denom;

    return divisao;
}

// FUNÇÃO PARA RETORNO DO ANGULO DE NÚMERO COMPLEXO
double anguloComplexo(Complexo n1) {
    
    double angle;

    angle = tan(n1.imag/n1.real);
    n1.theta = angle;
    
    return angle ;
}





