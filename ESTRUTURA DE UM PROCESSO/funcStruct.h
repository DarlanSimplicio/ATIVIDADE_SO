#define ELEMENTO 1000

typedef struct Processo{

    int pid                     ;
    int userId                  ;
    int programCounter          ;
    int stackPointer[ELEMENTO]  ;
    int priority                ;

} processo;

int contador = 0;

// INSTÂNCIA DE UM PROCESSO
void instProcesso(processo *instancia) {

    instancia = (processo*)malloc(sizeof(processo));
    //printf("# ENDERECO INICIAL DE MEMORIA: %d #\n", instancia);
    instancia->pid = contador+10;
    instancia->userId = contador+100;
    instancia->programCounter = contador+1;
    instancia->priority = 0;

    for(int i = 0 ; i < 1000 ; i++) {
        instancia->stackPointer[i] = 5 + (rand() % 1000) ;
    }

    escalonador(instancia);

}

// ENCERRA PROCESSO ATUAL 
void matProcesso(processo *instancia) {
       
    // LIBERA MEMÓRIA ALOCADA PELO PROCESSO ATUAL
    free(instancia);

    printf("---> PROCESSO %c ENCERRADO.\n", 65+contador);           
    printf("---> MEMORIA LIBERADA.\n");

}

void escalonador(processo *instancia) {

    processo *proc[4];

    proc[contador] = instancia;

    printf("\n--- PROCESSO %c ---\n", 65+contador);
    printf("Valor de PID: %d\n", proc[contador]->pid);
    printf("Valor de UserID: %d\n", proc[contador]->userId);
    printf("Valor de CountProgram: %d\n", proc[contador]->programCounter);
    /*for(int i = 0 ; i < 1000 ; i++){
        printf("Valor de StackPointer no indice %d do Proceso %c: %d \n", i+1, 65+contador, proc[contador]->stackPointer[i]);
    } */
    matProcesso(proc[contador]);
    //printf("DEPOIS DE MORTO: %d\n", proc[contador]->pid);
    contador++;

    
    /*
    for(int i = 0 ; i < 4 ; i++){
        printf("Valor: %d\n", proc[i]->pid);
        printf("Valor: %d\n", proc[i]->userId);
        //PROCESSO TERMINADO. MEMÓRIA DESALOCADA.
        matProcesso(proc[0]);    
    } */
}