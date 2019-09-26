typedef struct {

    char nome[30];
    char cargo[30];
    char ender[30];
    char cpf[30];
    int idade;
    float salario;

}Funcionario;

float totalPago(Funcionario f[], char cargo[] ) {

    float total = 0;

    for(int i = 0 ; i < 5 ; i++) {
        if(f[i].cargo[i] == cargo[i]) {
            total += f[i].salario;
        }
    }

    return total;
}
