#include <stdio.h>
#include <stdlib.h>


void registrar_status(){
    //pontero para o codigo de status(inteiro)
    int *status_code_prt = NULL;
    printf("----1. Alocacao para codigo de status----\n");
    status_code_prt = malloc(sizeof(int));

    if(status_code_prt==NULL){
        fprintf(stderr,"Erro:Falha ao alocar memória para status code.\n");
    }
    // Atribuicao de valor (simulando uma resposta de sucesso)
    //Usamos * para desreferenciar e atribuir 200 (ok)
    *status_code_prt=200;
    printf("Memoria alocada em: %p\n",(void*)status_code_prt);
    printf("status code registrado(usando*): %d\n", *status_code_prt);

    //---------------------------------------------------------------------
    //liberar memoria alocada
    free(status_code_prt);
};
int main()
{
    registrar_status();
    return 0;
}
