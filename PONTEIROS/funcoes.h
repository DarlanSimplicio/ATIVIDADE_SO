void impPoint(float *inicial, float *final)
{

    for (; inicial <= final; inicial++)
    {
        printf("Conteudo do Ponteiro no endereco: vet: %0.2f\n", *inicial);
    }
}

void pesqPoint(int *inicial, int *final, int valor)
{

    int validar = 0;
    int *p;
    for (; inicial <= final; inicial++)
    {
        if (*inicial == valor)
        {
            printf("Endereco de Memoria: %d\n", inicial);
            validar = 1;
        }
    }

    if (!validar)
    {
        printf("Nao encontrado: %d\n", NULL);
    }
}
