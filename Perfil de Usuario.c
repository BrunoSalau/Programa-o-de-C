#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome[6] = "Bruno";
    int idade = 19;
    char genero[10] = "Masculino";
    int ID;
    printf("Informe o ID de usuario do aluno:");
    scanf("%d", &ID);
    printf("\nUsuario de ID:%d", ID);
    printf("\nNome:%s", nome);
    printf("\nGenero:%s", genero);
    printf("\nIdade:%d\n\n", idade);
    return 0;
}
